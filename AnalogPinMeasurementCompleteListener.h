//
// Created by steyn on 17-6-4.
//

#ifndef DECI_LEG_TEST_ANALOGPINMEASUREMENTCOMPLETELISTENER_H
#define DECI_LEG_TEST_ANALOGPINMEASUREMENTCOMPLETELISTENER_H


namespace ZebroAvr {
	class AnalogPin;

	class AnalogPinMeasurementCompleteListener {
	public:
		virtual void onAnalogPinMeasurementComplete(AnalogPin* analogPin){};
	};
}


#endif //DECI_LEG_TEST_ANALOGPINMEASUREMENTCOMPLETELISTENER_H
