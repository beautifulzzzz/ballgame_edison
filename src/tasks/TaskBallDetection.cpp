/*
 * TaskBallDetection.cpp
 *
 *  Created on: Oct 22, 2016
 *      Author: Administrator
 */

#include "TaskBallDetection.h"


TaskBallDetection::TaskBallDetection() {
	// TODO Auto-generated constructor stub
	mpu6050 = new upm::MPU60X0();
}

void TaskBallDetection::Init(){
	mpu6050->init();
}

void TaskBallDetection::Run(unsigned int times){
	static char cout_str[30];

	mpu6050->update();

	float x, y, z;

	mpu6050->getAccelerometer(&x, &y, &z);
//	cout << "Accelerometer: ";
	x*=1000;
	y*=1000;
	z*=1000;

	sprintf(cout_str,"%6d %6d %6d\r\n",(int)x,(int)y,(int)z);
//	dev->writeStr(cout_str);
	cout<<cout_str;
//	float all=x*x+y*y+z*z;
//	cout<<all<<endl;
// 	cout << "AX: " << x*1000 << " AY: " << y*1000 << " AZ: " << z*1000 << endl;

// 	sensor->getGyroscope(&x, &y, &z);
// 	cout << "Gryoscope:     ";
// 	cout << "GX: " << x << " GY: " << y << " GZ: " << z << endl;
//
// 	cout << "Temperature:   " << sensor->getTemperature() << endl;
// 	cout << endl;
}

TaskBallDetection::~TaskBallDetection() {
	// TODO Auto-generated destructor stub
	cout << "delete mpu6050\r\n";
	delete mpu6050;
}

