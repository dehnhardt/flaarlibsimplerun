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
#include "modules/ThroughModule.h"
#include "modules/OutputModule.h"
#include "exceptions/Exceptions.h"

#include <string>

//#include "spdlog/spdlog.h"

FlaarlibSimpleRun::FlaarlibSimpleRun() {

	flaarlib::MyLogger * l = new flaarlib::MyLogger();
	flaarlib::FLLog::registerLogger(l);
	try {
		flaarlib = flaarlib::Flaarlib::instance();
		flaarlib::InputModule *m1 = new flaarlib::InputModule("Input1", 4);
		flaarlib::ThroughModule *m2 = new flaarlib::ThroughModule("Through1", 4,
				5);
		flaarlib::InputModule *m3 = new flaarlib::InputModule("Input2", 5);
		flaarlib::OutputModule *m4 = new flaarlib::OutputModule("Output1", 5);
		flaarlib::ThroughModule *m5 = new flaarlib::ThroughModule("Through1", 4,
				5);
		m1->connectOutput(m2);
		m2->connectOutput(m4);
		m1->connectOutput(m2);
	} catch (ConfigurationExecption *e) {
		l->error(e->getMessage());
	}
}

FlaarlibSimpleRun::~FlaarlibSimpleRun() {
	// TODO Auto-generated destructor stub
}

using namespace flaarlib;

int main() {
	new FlaarlibSimpleRun();
	return (0);
}

