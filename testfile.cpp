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
		string setEID();
		double setSalary();
		double setKPI();
		Person(double, double);
	private:
		string EID;
		double currentSalary, KPI;
};

string Person::setEID() {
	cout << "Please enter employee ID: ";
	cin >> EID;
}

double Person::setSalary() {
	cout << "Please enter the current employee ID: ";
	cin >> currentSalary;
}

double Person::setKPI() {
	cout << "Please enter the current employee KPI: ";
	cin >> KPI;
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

Person::Person(double salary, double kpi) {
	cout << "The employee ID is " << EID << endl;
	cout << "The current salary is RM" << currentSalary << endl;
	cout << "The KPI of the employee is " << KPI << endl;

}


//here i see the code from stackoverflow, i modify but kept on saying my class has no constructor. not sure what happen
int creatingobj() {
	Person** PersonArrayArray = new Person * [100]; // where n is number of arrays to create
	for (int i = 0; i < 100; ++i)
	{
		PersonArrayArray[i] = new Person[25];
	}

	// for freeing
	for (int i = 0; i < 100; ++i)
	{
		delete[] PersonArrayArray[i];
	}
	delete[] PersonArrayArray;
}


int main() {
	string eid;
	double salary;
	double kpivalue;

	Person employee1(eid, salary, kpivalue);


}