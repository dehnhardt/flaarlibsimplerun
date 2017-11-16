/*
 * FlaarlibSimpleRun.cpp
 *
 *  Created on: 04.11.2015
 *      Author: dehnhardt
 */

#include "FlaarlibSimpleRun.h"

#include <logging/FLLogger.h>

#include "logging/MyLogger.h"
#include "Flaarlib.h"
#include "modules/InputModule.h"
//#include "spdlog/spdlog.h"


FlaarlibSimpleRun::FlaarlibSimpleRun() {

	flaarlib::MyLogger * l =  new flaarlib::MyLogger();
	flaarlib::FLLog::registerLogger( l );

	flaarlib = new flaarlib::Flaarlib();
	flaarlib::InputModule *m1 = new flaarlib::InputModule("Test1", 5);
	flaarlib::InputModule *m2 = new flaarlib::InputModule("Test2", 5);
	m1->connectOutput(m2);

}

FlaarlibSimpleRun::~FlaarlibSimpleRun() {
	// TODO Auto-generated destructor stub
}

using namespace flaarlib;

int main() {
	new FlaarlibSimpleRun();
	return(0);
}

