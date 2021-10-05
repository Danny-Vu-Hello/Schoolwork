//Danny Vu
#include <iostream>

using namespace std;

int main()
{
	long value1,value2;
	value1 = 200000;
	long * longPtr = new long;
	longPtr = &value1;
	cout << *longPtr << endl;
	value2 = *longPtr;
	cout << value2 << endl;
	cout << &value1 << endl;
	cout << longPtr << endl;
	return 0;
}
