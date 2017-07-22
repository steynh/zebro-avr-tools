/*
 * Created by Steyn Huurman on 02-06-2017
 *
 * You can ask me questions: zebro@steynhuurman.nl
 */

#include "DigitalPin.h"
#include "DigitalPinInterruptListener.h"

void ZebroAvr::DigitalPin::onRisingEdgeInterrupt()
{
	if (interruptListener)
		interruptListener->onRisingEdgeInterrupt(this);
}

void ZebroAvr::DigitalPin::onFallingEdgeInterrupt()
{
	if (interruptListener)
		interruptListener->onFallingEdgeInterrupt(this);
}

void ZebroAvr::DigitalPin::onChangeInterrupt()
{
	if (interruptListener)
		interruptListener->onPinChangeInterrupt(this);
}

void ZebroAvr::DigitalPin::setInterruptListener(ZebroAvr::DigitalPinInterruptListener *listener)
{
	this->interruptListener = listener;
}
