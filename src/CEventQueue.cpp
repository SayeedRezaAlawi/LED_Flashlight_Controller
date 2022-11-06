/*
 * CEventQueue.cpp
 *
 *  Created on: Nov 6, 2022
 *      Author: Reza
 */

#include "../include/CEventQueue.h"

CEventQueue::CEventQueue()
{
	// TODO Auto-generated constructor stub

}

Event CEventQueue::nextEvent()
{
	Event event = queue.front();
	return event;
}

void CEventQueue::addEvent(Event event)
{
	queue.push_back(event);
}

CEventQueue::~CEventQueue()
{
	// TODO Auto-generated destructor stub
}

