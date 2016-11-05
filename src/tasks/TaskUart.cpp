/*
 * TaskUart.cpp
 *
 *  Created on: Oct 23, 2016
 *      Author: Administrator
 */

#include "TaskUart.h"

TaskUart::TaskUart() {
	// TODO Auto-generated constructor stub
	//UART INIT-----------------------------------------------
	try {
		mUart = new mraa::Uart(0);
	}catch (std::exception& e) {
		std::cout << e.what() << ", likely invalid platform config" << std::endl;
	}
}

void TaskUart::Init(){
	if (mUart->setBaudRate(115200) != mraa::SUCCESS) {
		std::cout << "Error setting parity on UART" << std::endl;
	}

	if (mUart->setMode(8, mraa::UART_PARITY_NONE, 1) != mraa::SUCCESS) {
		std::cout << "Error setting parity on UART" << std::endl;
	}

	if (mUart->setFlowcontrol(false, false) != mraa::SUCCESS) {
		std::cout << "Error setting flow control UART" << std::endl;
	}
}

void TaskUart::Run(unsigned int times){
	cout<<(mUart->readStr(1));
}

TaskUart::~TaskUart() {
	// TODO Auto-generated destructor stub
	cout << "delete mUart\r\n";
	delete mUart;
}

