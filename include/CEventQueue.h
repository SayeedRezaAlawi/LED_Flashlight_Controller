/*
 * CEventQueue.h
 *
 *  Created on: Nov 6, 2022
 *      Author: Reza
 */

#ifndef CEVENTQUEUE_H_
#define CEVENTQUEUE_H_

#include "../include/global.h"
#include <list>

class CEventQueue
{
private:
	std::list<Event> queue;
public:
	CEventQueue();
	Event nextEvent();
	void addEvent(Event event);
	virtual ~CEventQueue();
};

#endif /* CEVENTQUEUE_H_ */
