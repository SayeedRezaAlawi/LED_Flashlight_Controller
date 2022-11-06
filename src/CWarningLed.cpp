/*
 * CWarningLed.cpp
 *
 *  Created on: Nov 6, 2022
 *      Author: Reza
 */

#include "CWarningLed.h"
#include <iostream>
CWarningLed::CWarningLed()
{
	// TODO Auto-generated constructor stub

}

CWarningLed::~CWarningLed()
{
	// TODO Auto-generated destructor stub
}

void CWarningLed::on()
{
	std::cout << "Warning LED is on" << std::endl;
}

void CWarningLed::off()
{
	std::cout << "Warning LED is off" << std::endl;
}
