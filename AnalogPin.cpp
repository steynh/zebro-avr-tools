/*
 * Created by Steyn Huurman on 04-06-2017
 *
 * You can ask me questions: zebro@steynhuurman.nl
 */

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
