/*
 * Created by Steyn Huurman on 04-06-2017
 *
 * You can ask me questions: zebro@steynhuurman.nl
 */

#ifndef ZEBRO_AVR_ANALOG_PIN_H
#define ZEBRO_AVR_ANALOG_PIN_H


namespace ZebroAvr {
	class AnalogPinMeasurementCompleteListener;

	class AnalogPin {
	public:
		void setMeasurementCompleteListener(AnalogPinMeasurementCompleteListener* measurementCompleteListener);
		void onMeasurementCompleteInterrupt();

	private:
		AnalogPinMeasurementCompleteListener* measurementCompleteListener = nullptr;
	};
}


#endif //ZEBRO_AVR_ANALOG_PIN_H
