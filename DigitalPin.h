/*
 * Created by Steyn Huurman on 02-06-2017
 *
 * You can ask me questions: zebro@steynhuurman.nl
 */

#ifndef ZEBRO_AVR_DIGITAL_PIN_H
#define ZEBRO_AVR_DIGITAL_PIN_H


namespace ZebroAvr {
	class DigitalPinInterruptListener;

	enum PinMode {
		INPUT,
		OUTPUT
	};

	enum PinValue {
		LOW=0,
		HIGH=1
	};

	class DigitalPin {
	public:
		virtual void setMode(PinMode mode){};

		virtual PinValue read(){ return HIGH; };
		virtual void write(PinValue value){};

		virtual void onRisingEdgeInterrupt();
		virtual void onFallingEdgeInterrupt();
		virtual void onChangeInterrupt();

		void setInterruptListener(DigitalPinInterruptListener* listener);

	private:
		DigitalPinInterruptListener* interruptListener = nullptr;
	};
}



#endif //ZEBRO_AVR_DIGITAL_PIN_H
