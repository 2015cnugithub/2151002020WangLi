#include"Worker.h"

Worker::Worker(string name, int age, string sex, double pay_per_hour) {
	Worker::name = name;
	Worker::age = age;
	Worker::sex = sex;
	Worker::pay_per_hour = pay_per_hour;
}

string Worker::getName() {
	return Worker::name;
}

int Worker::getAge() {
	return Worker::age;
}

string Worker::getSex() {
	return Worker::sex;
}

double Worker::getPayPerHour() {
	return Worker::pay_per_hour;
}

void Worker::compute_pay(double hours) {
	//Nothing.
}
