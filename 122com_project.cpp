//#include <iostream>
//#include <sstream>
//
//using namespace std;
//
//int taxableIncome;
//int main() {
//	for (;;) {
//		cout << "Please enter in your taxable income: ";
//		if (cin >> taxableIncome) {
//			break;
//		}
//		else {
//			cout << "Please enter a valid integer" << endl;
//			cin.clear();
//			cin.ignore(numeric_limits<streamsize>::max(), '\n');
//		}
//	}
//}


#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int revSalary(double, double);
int bonus(double, double);

//the original class, but don't work with the dynamic object creation using array, so i make use of the new class i making on another file
//this one suppose to be the real running system. but i want to add in:
//1. ability to create new object and able to recall it and save it/delete it.
//2. allow user to check back what they entered
class Person {       // The class
public:             // Access specifier
	string EID;        // Attribute (int variable)
	double currentSalary;  // Attribute (string variable)
	double KPI;
	Person(string eid, double salary, double kpivalue) {
		EID = eid;
		currentSalary = salary;
		KPI = kpivalue;
	}

};

int main() {
	string eid;
	double salary;
	double kpivalue;

//	Person employee1("P1901", 1000, 2.1);
	cout << "Employee ID: ";
	cin >> eid;
	cout << "\nSalary:  ";
	cin >> salary;
	cout << "\nkpivalue: ";
	cin >> kpivalue;

	Person employee1(eid, salary, kpivalue);

	cout << employee1.EID << " " << employee1.currentSalary << " " << employee1.KPI << endl;

	cout << revSalary(employee1.currentSalary, employee1.KPI) << endl;

	cout << bonus(employee1.currentSalary, employee1.KPI) << endl;
	return 0;
}

int revSalary(double salary, double kpivalue) {
	double revSalary;
	if ((kpivalue > 0) && (kpivalue <= 2.0)) {
		revSalary = salary * 1.02;
		return revSalary;
	}
	else if ((kpivalue >= 2.1) && (kpivalue <= 2.5)) {
		revSalary = salary * 1.035;
		return revSalary;
	}
	else if ((kpivalue >= 2.6) && (kpivalue <= 3.0)) {
		revSalary = salary * 1.04;
		return revSalary;
	}
	else if ((kpivalue >= 3.1) && (kpivalue <= 3.5)) {
		revSalary = salary * 1.05;
		return revSalary;
	}
	else if ((kpivalue >= 3.6) && (kpivalue <= 4.0)) {
		revSalary = salary * 1.1;
		return revSalary;
	}
}

int bonus(double salary, double kpivalue) {
	double bonus;
	if ((kpivalue >= 0) && (kpivalue <= 2.0)) {
		bonus = (salary * 1);
		return bonus;
	}
	else if ((kpivalue >= 2.1) && (kpivalue <= 2.5)) {
		bonus = salary * 1.5;
		return bonus;
	}
	else if ((kpivalue >= 2.6) && (kpivalue <= 3.0)) {
		bonus = salary * 2;
		return bonus;
	}
	else if ((kpivalue >= 3.1) && (kpivalue <= 3.5)) {
		bonus = salary * 2.5;
		return bonus;
	}
	else if ((kpivalue >= 3.6) && (kpivalue <= 4.0)) {
		bonus = salary * 3;
		return bonus;
	}
}
