//
// Created by steyn on 17-6-2.
//

#ifndef ZEBRO_AVR_DIGITAL_PIN_INTERRUPT_LISTENER_H
#define ZEBRO_AVR_DIGITAL_PIN_INTERRUPT_LISTENER_H

namespace ZebroAvr {
	class DigitalPin;

	class DigitalPinInterruptListener {
	public:
		virtual void onRisingEdgeInterrupt(DigitalPin* pin){};
		virtual void onFallingEdgeInterrupt(DigitalPin* pin){};
		virtual void onPinChangeInterrupt(DigitalPin* pin){};
	};
}


#endif //ZEBRO_AVR_DIGITAL_PIN_INTERRUPT_LISTENER_H
