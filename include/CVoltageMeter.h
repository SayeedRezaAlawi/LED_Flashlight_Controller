/*
 * CVoltageMeter.h
 *
 *  Created on: Nov 6, 2022
 *      Author: Reza
 */

#ifndef CVOLTAGEMETER_H_
#define CVOLTAGEMETER_H_

class CVoltageMeter
{
public:
	CVoltageMeter();
	float getVoltage();
	virtual ~CVoltageMeter();
};

#endif /* CVOLTAGEMETER_H_ */
