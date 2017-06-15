//
// Created by steyn on 17-6-2.
//

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
