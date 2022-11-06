/*
 * CTimer.cpp
 *
 *  Created on: Nov 6, 2022
 *      Author: Reza
 */

#include "CTimer.h"

CTimer::CTimer()
{
	// TODO Auto-generated constructor stub

}

CTimer::~CTimer()
{
	// TODO Auto-generated destructor stub
}

void CTimer::setEventQueue(CEventQueue &eventQueue)
{
	m_eventQueue = &eventQueue;
}

void CTimer::setWaitTime(uint16_t millis)
{
	m_millis = millis;
}
