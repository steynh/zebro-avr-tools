//
// Created by steyn on 17-6-4.
//

#ifndef DECI_LEG_TEST_ANALOGPIN_H
#define DECI_LEG_TEST_ANALOGPIN_H


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


#endif //DECI_LEG_TEST_ANALOGPIN_H
