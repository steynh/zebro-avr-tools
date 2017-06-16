//
// Created by steyn on 17-6-4.
//

#ifndef ZEBRO_AVR_ANALOG_PIN_MEASUREMENT_COMPLETE_LISTENER_H
#define ZEBRO_AVR_ANALOG_PIN_MEASUREMENT_COMPLETE_LISTENER_H


namespace ZebroAvr {
	class AnalogPin;

	class AnalogPinMeasurementCompleteListener {
	public:
		virtual void onAnalogPinMeasurementComplete(AnalogPin* analogPin){};
	};
}


#endif //ZEBRO_AVR_ANALOG_PIN_MEASUREMENT_COMPLETE_LISTENER_H
