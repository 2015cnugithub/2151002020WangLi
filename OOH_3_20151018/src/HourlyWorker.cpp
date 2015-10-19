#include"HourlyWorker.h"

HourlyWorker::HourlyWorker(string name, int age, string sex,
		double pay_per_hour) :
		Worker(name, age, sex, pay_per_hour) {
	//Nothing.
}

void HourlyWorker::compute_pay(double hours) {
	double salary = 0;
	if (hours < 40) {
		salary = getPayPerHour() * hours;
	} else {
		salary = getPayPerHour() * 40 + 1.5 * getPayPerHour() * (hours - 40);
	}
	cout << getName() << "'s salary in this week is " << salary << "." << endl;
}
