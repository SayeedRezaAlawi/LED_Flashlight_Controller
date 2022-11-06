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
#include "CFlashlightLed.h"
#include "CTimer.h"
#include "CVoltageMeter.h"
#include "CWarningLed.h"
#include "global.h"

#define HBU_ON (m_hbu->on())
#define HBU_OFF (m_hbu->off())
#define TMR(X) (m_tmr->setWaitTime(X))
#define FLB(X) (m_light->setBrightness(X))
#define EES(X) (m_eeprom->store(X))
#define EER (m_eeprom->retrieve())
#define BAT (m_bat->getVoltage())

class CController
{
protected:
	CPushButton* m_mode;
	CTimer* m_tmr;
	CFlashlightLed* m_light;
	CWarningLed* m_hbu;
	CVoltageMeter* m_bat;
	CEventQueue m_evtQueue;
	CEeprom* m_eeprom;
	CController(CPushButton* pushBtn, CTimer* timer, CFlashlightLed* light,
			CWarningLed* hbu, CVoltageMeter* bat, CEeprom* eeprom);
public:
	virtual void run();
	virtual ~CController();
};

#endif /* CCONTROLLER_H_ */
