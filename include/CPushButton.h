/*
 * CPushButton.h
 *
 *  Created on: Nov 6, 2022
 *      Author: Reza
 */

#ifndef CPUSHBUTTON_H_
#define CPUSHBUTTON_H_

#include "CEventQueue.h"

class CPushButton
{
private:
	CEventQueue * m_eventQueue;
public:
	CPushButton();
	void setEventQueue(CEventQueue& eventQueue);
	void addEvent();
	virtual ~CPushButton();
};

#endif /* CPUSHBUTTON_H_ */
