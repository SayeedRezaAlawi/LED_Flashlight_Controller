/*
 * CTimer.cpp
 *
 *  Created on: Nov 6, 2022
 *      Author: Reza
 */

#include "CTimer.h"
#include <unistd.h>
#include <iostream>
#include "global.h"

CTimer::CTimer()
{
	// TODO Auto-generated constructor stub

}

void CTimer::addEvent()
{
	Event event = TmrExp;
	m_eventQueue->addEvent(event);
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
	usleep(m_millis * 1000);
	addEvent();
}
