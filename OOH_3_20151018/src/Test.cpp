#include<iostream>

#include"Worker.h"
#include"HourlyWorker.h"
#include"SalariedWorker.h"

using namespace std;

ostream& operator <<(ostream& out, Worker& worker) {
	out << "Name: " << worker.getName() << endl;
	out << "Age: " << worker.getAge() << endl;
	out << "Sex: " << worker.getSex() << endl;
	out << "Salary per hour: " << worker.getPayPerHour() << endl;
	return out;
}

int main() {
	cout << endl << "Please initialize five workers by following steps."
			<< endl;
	Worker* workers[5];
	int i = 1;
	for (; i <= 5; i++) {
		cout << endl << "Please choose the kind of the " << i
				<< "th worker (Input the number):" << endl;
		cout << "1.HourlyWorker 2.SalariedWorker" << endl;
		int kind = 1;
		cin >> kind;

		cout << endl << "Please input the name of the " << i << "th worker:"
				<< endl;
		string name;
		cin >> name;

		cout << endl << "Please input the age of the " << i << "th worker:"
				<< endl;
		int age;
		cin >> age;

		cout << endl << "Please input the sex of the " << i
				<< "th worker (Input the number):" << endl;
		cout << "1.male 2.female" << endl;
		int sexInt;
		cin >> sexInt;
		string sex;
		if (sexInt == 1) {
			sex = "male";
		} else {
			sex = "female";
		}

		double pay_per_hour;
		cout << endl << "Please input the pay per hour of the " << i
				<< "th worker (Input the number):" << endl;
		if (kind == 1) {
			cout << "1.$10/h 2.$20/h 3.$40/h" << endl;
			int salaryInput;
			cin >> salaryInput;
			if (salaryInput == 1) {
				pay_per_hour = 10;
			} else if (salaryInput == 2) {
				pay_per_hour = 20;
			} else {
				pay_per_hour = 40;
			}
		} else {
			cout << "1.$30/h 2.$50/h" << endl;
			int salaryInput;
			cin >> salaryInput;
			if (salaryInput == 1) {
				pay_per_hour = 30;
			} else {
				pay_per_hour = 50;
			}
		}

		Worker* pWorker;
		if (kind == 1) {
			pWorker = new HourlyWorker(name, age, sex, pay_per_hour);
		} else {
			pWorker = new SalariedWorker(name, age, sex, pay_per_hour);
		}
		workers[i - 1] = pWorker;
	}
	cout << endl;

	bool exited = false;
	do {
		cout << endl
				<< "You can choose someone to operate or exit (Input the number):"
				<< endl;
		cout << "1.Choose someone 2.exit" << endl;

		int manu1;
		cin >> manu1;
		if (manu1 == 1) {
			cout << endl
					<< "Please choose who you want to operate (Input the number):"
					<< endl << endl;
			for (i = 0; i < 5; i++) {
				cout << i + 1 << "." << workers[i]->getName() << endl;
			}
			cout << endl;

			int manu2;
			cin >> manu2;

			cout << endl << "What do you want to "
					<< workers[manu2 - 1]->getName() << " (Input the number):"
					<< endl;
			cout << "1.Show Info 2.Show salary" << endl;

			int manu3;
			cin >> manu3;
			if (manu3 == 1) {
				cout << *workers[manu2 - 1];
			} else {
				cout << "Input the hours for working:" << endl;
				double hours;
				cin >> hours;
				workers[manu2 - 1]->compute_pay(hours);
				cout << endl;
			}
		} else {
			exited = true;
			cout << endl << "Bye." << endl;
		}
	} while (!exited);

	for (i = 0; i < 5; i++) {
		delete workers[i];
	}
}
