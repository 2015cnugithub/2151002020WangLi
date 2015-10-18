#ifndef WORKER_H
#define WORKER_H

#include<iostream>

using namespace std;

class Worker {
private:
	string name;
	int age;
	string sex;
	double pay_per_hour;
public:
	Worker(string, int, string, double);

	string getName();
	int getAge();
	string getSex();
	double getPayPerHour();

	friend ostream& operator <<(ostream& out, Worker& worker);

	virtual void compute_pay(double);
};

#endif
