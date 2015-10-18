#ifndef SALARIEDWORKER_H
#define SALARIEDWORKER_H

#include<iostream>
#include"Worker.h"

using namespace std;

class SalariedWorker: public Worker {
public:
	SalariedWorker(string, int, string, double);
	void compute_pay(double);
};

#endif
