/*
 * TaskUart.h
 *
 *  Created on: Oct 23, 2016
 *      Author: Administrator
 */

#ifndef UART_TASKUART_H_
#define UART_TASKUART_H_

#include <iostream>
#include "mraa.hpp"

using namespace std;

class TaskUart {
private:
	mraa::Uart* mUart;
public:
	TaskUart();
	void Init();
	void Run(unsigned int times);
	virtual ~TaskUart();
};

#endif /* UART_TASKUART_H_ */
