/*
 * CController.h
 *
 *  Created on: Nov 6, 2022
 *      Author: Reza
 */

#ifndef CCONTROLLER_H_
#define CCONTROLLER_H_

#include "CPushButton.h"
#include "CEventQueue.h"
#include "CEeprom.h"
#include "CFlashlighLed.h"
#include "CTimer.h"
#include "CVoltageMeter.h"
#include "CWarningLed.h"
#include "global.h"

class CController
{
private:
	CPushButton* m_mode;
	CTimer* m_tmr;
	CFlashlighLed* m_light;
	CWarningLed* m_hbu;
	CVoltageMeter* m_bat;
protected:
	CEventQueue m_evtQueue;
	CEeprom* m_eeprom;
public:
	CController();
	void run();
	virtual ~CController();
};

#endif /* CCONTROLLER_H_ */
