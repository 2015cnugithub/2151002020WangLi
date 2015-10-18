#include"SalariedWorker.h"

SalariedWorker::SalariedWorker(string name, int age, string sex,
		double pay_per_hour) :
		Worker(name, age, sex, pay_per_hour) {
	//Nothing.
}

void SalariedWorker::compute_pay(double hours) {
	int salary = 0;
	if (hours >= 35) {
		salary = getPayPerHour() * 40;
	} else {
		salary = getPayPerHour() * hours + 0.5 * getPayPerHour() * (hours - 35);
	}
	cout << getName() << "'s salary in this week is " << salary << "." << endl;
}
