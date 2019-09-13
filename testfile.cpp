#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;


//the class im working on, supposingly with "constructor"
class Person {       // The class
	public:             // Access specifier
		string getEID(void);
		double getCurrentSalary(void);
		double getKPI(void);
		void setEID(string);
		void setSalary(double);
		void setKPI(double);
		//Person(double, double);
		Person(string eid, double salary, double kpivalue) {
			EID = eid;
			currentSalary = salary;
			KPI = kpivalue;
		}
	private:
		string EID;
		double currentSalary, KPI;
};

//Person::Person(double salary,double kpi) {
//	cout << "The employee ID is " << EID << endl;
//	cout << "The current salary is RM" << currentSalary << endl;
//	cout << "The KPI of the employee is " << KPI << endl;
//}


void Person::setEID(string eid) {
	cout << "Please enter employee ID: ";
	cin >> eid;
	EID = eid;
}

void Person::setSalary(double salary) {
	cout << "Please enter the current employee ID: ";
	cin >> salary;
	currentSalary = salary;
}

void Person::setKPI(double kpivalue) {
	cout << "Please enter the current employee KPI: ";
	cin >> kpivalue;
	KPI = kpivalue;
}

string Person::getEID(void) {
	return EID;
}

double Person::getCurrentSalary(void) {
	return currentSalary;
}

double Person::getKPI(void) {
	return KPI;
}

//here i see the code from stackoverflow, i modify but kept on saying my class has no constructor. not sure what happen
//int creatingobj() {
//	Person** PersonArrayArray = new Person * [100]; // where n is number of arrays to create
//	for (int i = 0; i < 100; ++i)
//	{
//		PersonArrayArray[i] = new Person(25);
//	}
//
//	// for freeing
//	for (int i = 0; i < 100; ++i)
//	{
//		delete[] PersonArrayArray[i];
//	}
//	delete[] PersonArrayArray;
//}


int main() {
	string eid;
	double salary;
	double kpivalue;

	Person employee1("qwer", 10000, 1.2);
	//employee1.setEID("qwe");
	//employee1.setKPI( 1.2);
	//employee1.setSalary(10000);
	cout << employee1.getCurrentSalary() << endl;

}