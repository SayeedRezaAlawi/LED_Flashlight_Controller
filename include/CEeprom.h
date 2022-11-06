/*
 * CEeprom.h
 *
 *  Created on: Nov 6, 2022
 *      Author: Reza
 */

#ifndef CEEPROM_H_
#define CEEPROM_H_

#include "global.h"

class CEeprom
{
private:
	uint8_t m_value;
public:
	CEeprom();
	void store(uint8_t value);
	uint8_t retrieve();
	virtual ~CEeprom();
};

#endif /* CEEPROM_H_ */
