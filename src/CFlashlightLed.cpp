/*
 * CFlashlighLed.cpp
 *
 *  Created on: Nov 6, 2022
 *      Author: Reza
 */

#include "CFlashlightLed.h"
#include <Cstdio>

CFlashlightLed::CFlashlightLed()
{
	// TODO Auto-generated constructor stub

}

CFlashlightLed::~CFlashlightLed()
{
	// TODO Auto-generated destructor stub
}

void CFlashlightLed::setBrightness(uint8_t brightness)
{
	m_brightness = brightness;
	printf("Brightness is set as %d.\n", m_brightness);
}
