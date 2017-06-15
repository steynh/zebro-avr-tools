//
// Created by steyn on 17-6-4.
//

#include "AnalogPin.h"
#include "AnalogPinMeasurementCompleteListener.h"

void ZebroAvr::AnalogPin::setMeasurementCompleteListener(
		ZebroAvr::AnalogPinMeasurementCompleteListener *measurementCompleteListener
)
{
	this->measurementCompleteListener = measurementCompleteListener;
}

void ZebroAvr::AnalogPin::onMeasurementCompleteInterrupt()
{
	if (measurementCompleteListener)
		measurementCompleteListener->onAnalogPinMeasurementComplete(this);
}
