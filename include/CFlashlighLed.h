/*
 * CFlashlighLed.h
 *
 *  Created on: Nov 6, 2022
 *      Author: Reza
 */

#ifndef CFLASHLIGHLED_H_
#define CFLASHLIGHLED_H_

#include "global.h"

class CFlashlighLed
{
private:
	uint8_t m_brightness;
public:
	CFlashlighLed();
	void setBrightness(uint8_t brightness);
	virtual ~CFlashlighLed();
};

#endif /* CFLASHLIGHLED_H_ */
