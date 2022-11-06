/*
 * CController.cpp
 *
 *  Created on: Nov 6, 2022
 *      Author: Reza
 */

#include "CController.h"

CController::CController(CPushButton* pushBtn, CTimer* timer, CFlashlightLed* light,
		CWarningLed* hbu, CVoltageMeter* bat, CEeprom* eeprom)
{
	m_mode = pushBtn;
	m_tmr = timer;
	m_light = light;
	m_hbu = hbu;
	m_bat = bat;
	m_eeprom = eeprom;

}

void CController::run()
{
}

CController::~CController()
{
	// TODO Auto-generated destructor stub
}

