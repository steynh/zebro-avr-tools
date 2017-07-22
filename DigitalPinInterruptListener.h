/*
 * Created by Steyn Huurman on 02-06-2017
 *
 * You can ask me questions: zebro@steynhuurman.nl
 */

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
