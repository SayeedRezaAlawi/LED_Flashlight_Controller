/*
 * CPushButton.cpp
 *
 *  Created on: Nov 6, 2022
 *      Author: Reza
 */

#include "CPushButton.h"
#include <iostream>



CPushButton::CPushButton()
{
	// TODO Auto-generated constructor stub

}

void CPushButton::setEventQueue(CEventQueue &eventQueue)
{
	m_eventQueue = &eventQueue;
}

void CPushButton::addEvent()
{
	Event event = BPushed;
	m_eventQueue->addEvent(event);
}

CPushButton::~CPushButton()
{
	// TODO Auto-generated destructor stub
}

