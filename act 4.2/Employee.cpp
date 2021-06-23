#include "Employee.h"
#include <iostream>
#include <string>

using namespace std;

Employee::Employee()
{
}

void Employee::getData()
{
	string name;
	cin >> name;
	employeeName = name;
	long number;
	cin >> number;
	employeeNumber = number;
}

void Employee::putData()
{
	cout << employeeName << " " << employeeNumber << endl;
}
