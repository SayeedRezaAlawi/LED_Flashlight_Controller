/*
 * CEeprom.cpp
 *
 *  Created on: Nov 6, 2022
 *      Author: Reza
 */

#include "CEeprom.h"

CEeprom::CEeprom()
{
	// TODO Auto-generated constructor stub

}

CEeprom::~CEeprom()
{
	// TODO Auto-generated destructor stub
}

void CEeprom::store(uint8_t value)
{
	m_value = value;
}

uint8_t CEeprom::retrieve()
{
	return m_value;
}
