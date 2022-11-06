/*
 * CEeprom.cpp
 *
 *  Created on: Nov 6, 2022
 *      Author: Reza
 */

#include "CEeprom.h"
#include <Cstdio>

CEeprom::CEeprom()
{
	m_value =1;

}

CEeprom::~CEeprom()
{
	// TODO Auto-generated destructor stub
}

void CEeprom::store(uint8_t value)
{
	m_value = value;
	printf("Last brightness is stored and is %d\n", m_value);
}

uint8_t CEeprom::retrieve()
{
	printf("Last brightness is retrieved and is %d\n", m_value);
	return m_value;
}
