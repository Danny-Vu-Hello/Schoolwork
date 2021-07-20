//Danny Vu
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class alpha
{
	private:
		int data;
	public:
	//YOUR CODE
	alpha()
	{ }
	alpha(int n)
	{data = n;}
	alpha(alpha& a)
	{data = a.data;}
	void display();
};


void alpha::display()
{
	cout << data;
}

////////////////////////////////////////////////////////////////
int main()
{
	alpha a1(37);
	alpha a2;
	
	a2 = a1; //invoke overloaded =
	cout << "\na2=";
	a2.display(); //display a2
	alpha a3(a1); //invoke copy constructor
	cout << "\na3=";
	a3.display(); //display a3
	alpha a4 = a1; 
	cout << "\na4=";
	a4.display(); 
	cout << endl;
	return 0;
}
