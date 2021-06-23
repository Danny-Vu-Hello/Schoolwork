#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

using namespace std;

class Employee
{
	public:
		Employee();
		void getData();
		void putData();
	private:
		string employeeName;
		long employeeNumber;
};

#endif
