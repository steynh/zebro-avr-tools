//
// Created by steyn on 17-6-2.
//

#ifndef DECI_LEG_TEST_DIGITALPININTERRUPTLISTENER_H
#define DECI_LEG_TEST_DIGITALPININTERRUPTLISTENER_H

namespace ZebroAvr {
	class DigitalPin;

	class DigitalPinInterruptListener {
	public:
		virtual void onRisingEdgeInterrupt(DigitalPin* pin){};
		virtual void onFallingEdgeInterrupt(DigitalPin* pin){};
		virtual void onPinChangeInterrupt(DigitalPin* pin){};
	};
}


#endif //DECI_LEG_TEST_DIGITALPININTERRUPTLISTENER_H
