/*
 * CTimer.h
 *
 *  Created on: Nov 6, 2022
 *      Author: Reza
 */

#ifndef CTIMER_H_
#define CTIMER_H_

#include "CEventQueue.h"


class CTimer
{
private:
	CEventQueue* m_eventQueue;
	uint16_t m_millis;
public:
	CTimer();
	void setEventQueue(CEventQueue& eventQueue);
	void setWaitTime(uint16_t millis);
	void addEvent();
	virtual ~CTimer();
};

#endif /* CTIMER_H_ */
