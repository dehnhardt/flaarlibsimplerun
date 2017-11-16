/*
 * FlaarlibSimpleRun.h
 *
 *  Created on: 04.11.2015
 *      Author: dehnhardt
 */

#ifndef FLAARLIBSIMPLERUN_H_
#define FLAARLIBSIMPLERUN_H_


#include <Flaarlib.h>

class FlaarlibSimpleRun {
public:
	FlaarlibSimpleRun();
	virtual ~FlaarlibSimpleRun();

protected:
	flaarlib::Flaarlib * flaarlib;
};

int main();

#endif /* FLAARLIBSIMPLERUN_H_ */
