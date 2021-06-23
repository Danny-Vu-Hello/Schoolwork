#include "Employee.h"
#include <iostream>

using namespace std;

int main()
{
	Employee E1[3];
	for(int i = 1;i < 4; i++)
	{
		cout << "Input employee #" << i << "'s name then input employee #" << i << "'s number" << endl;
		E1[i-1].getData();
	}
	for(int i = 1; i < 4; i++)
	{
		cout << "employee #" << i << " " << flush;
		E1[i-1].putData();
	}
	return 0;
}
