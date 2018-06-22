/*
 * Application.h
 *
 *  Created on: Jun 17, 2018
 *      Author: xgallom
 */

#ifndef APPLICATION_H_
#define APPLICATION_H_

#include "Periph/Led.h"
#include "Util/Logger.h"

class Application {
	static Application *m_instance;

	class ApplicationInitializator {
	public:
		ApplicationInitializator(Application *parent);
	} m_applicationInitializator;


public:
	Util::Logger logger;
	Periph::Usart usartLog;

private:
	Periph::Led m_appRunningLed;


public:
	Application();

	void run();

	static Application *instance();

};

#define App ::Application::instance()

#endif /* APPLICATION_H_ */
