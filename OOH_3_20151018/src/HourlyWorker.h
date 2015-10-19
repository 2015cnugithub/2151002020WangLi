#ifndef HOURLYWORKER_H
#define HOURLYWORKER_H

#include<iostream>
#include"Worker.h"

using namespace std;

class HourlyWorker: public Worker {
public:
	HourlyWorker(string, int, string, double);
	void compute_pay(double hours);
};

#endif
