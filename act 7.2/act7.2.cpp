//Danny Vu
#include <iostream>

using namespace std;

class Distance //English Distance class
{
	private:
		int feet;
		float inches;
	public: //constructor (no args)
		Distance() : feet(0), inches(0.0)
		{ } //constructor (two args)
		Distance(int ft, float in) : feet(ft), inches(in)
		{feet = ft; inches = in;}
		Distance operator+(Distance d1);
		friend Distance operator-(const Distance& d1, const Distance& d2);
		friend ostream& operator<<(ostream& os, Distance& d);
		friend istream& operator>>(istream& is, Distance& d);
};

Distance Distance::operator+(Distance d1) 
{
	Distance temp;
    temp.feet = feet + d1.feet;
    temp.inches = inches + d1.inches;
	while (temp.inches > 12)
    {
    	temp.feet++;
    	temp.inches -= 12;
	}
    return temp;
}

Distance operator-(const Distance& d1, const Distance& d2) 
{
	Distance temp;
    temp.feet = d1.feet - d2.feet;
    temp.inches = d1.inches - d2.inches;
	while (temp.inches < 0)
    {
    	temp.feet--;
    	temp.inches += 12;
	}
    return temp;
}

ostream& operator<<(ostream& os, Distance& d)
{
    os << d.feet << " ft " << d.inches << " in ";
    return os;
}

istream& operator>>(istream& is, Distance& d)
{
    is >> d.feet >> d.inches;
    return is;
}

/**
Overloading the following operators: 
a. +  to add two Distance objects using member function.
b. -   to subtract two Distance objects using friend function
c.  <<  and >>
Use the following main function to test your class Distance.
*/
int main()
{
	Distance dist1, dist3, dist4; //define distances
	cin>>dist1;
	Distance dist2(11, 6.25); //define, initialize dist2
	dist3 = dist1 + dist2; //single '+' operator
	dist4 = dist1 - dist2; //friend '-' operators
	//display all lengths
	cout << "dist1 = ";
	cout<< dist1 << endl;
	cout << "dist2 = ";
	cout<< dist2 << endl;
	cout << "dist3 = ";
	cout<< dist3 << endl;
	cout << "dist4 = ";
	cout<< dist4 << endl;
	return 0;
}
