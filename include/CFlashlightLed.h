/*
 * CFlashlighLed.h
 *
 *  Created on: Nov 6, 2022
 *      Author: Reza
 */

#ifndef CFLASHLIGHTLED_H_
#define CFLASHLIGHTLED_H_

#include "global.h"

class CFlashlightLed
{
private:
	uint8_t m_brightness;
public:
	CFlashlightLed();
	void setBrightness(uint8_t brightness);
	virtual ~CFlashlightLed();
};

#endif /* CFLASHLIGHLED_H_ */
