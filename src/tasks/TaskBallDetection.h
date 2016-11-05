/*
 * TaskBallDetection.h
 *
 *  Created on: Oct 22, 2016
 *      Author: Administrator
 */

#ifndef TASKS_TASKBALLDETECTION_H_
#define TASKS_TASKBALLDETECTION_H_


#include <iostream>
#include "../mpu6050/mpu60x0.hpp"

using namespace std;

class TaskBallDetection {
private:
	upm::MPU60X0 *mpu6050;
public:
	TaskBallDetection();
	void Init();
	void Run(unsigned int times);
	virtual ~TaskBallDetection();
};

#endif /* TASKS_TASKBALLDETECTION_H_ */
