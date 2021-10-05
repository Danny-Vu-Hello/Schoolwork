#include "time12.h"
#include "time24.h"
#include <iostream>

using namespace std;

time12()
{
	pm = true;
	hrs,mins = 0;
}

time12(time24 t24)
{
	if (t24.gethrs()>11)
	{
		pm = true;
	}
	else
	{
		pm = false;
	};
	hrs = (t24.gethrs()%12);
	if (hrs == 0)
	{
		hrs = 12;
	}
	mins = t24.getmins();
}

time12(bool ap, int h, int m)
{ 
	pm = ap;
	hrs = h;
	mins = m;
	temp hour = h;
	if(h/12==1) hour+=12;
	temp = time24(hour,m,0);
}

int time12::gethrs()
{
	return hours;
}

int time12::getmins()
{
	return minutes;
}	

void time12::display() const //format: 11:59 p.m.
{
	cout << hrs << ':';
	if(mins < 10)
	cout << '0'; //extra zero for "01"
	cout << mins << ' ';
	string am_pm = pm ? "p.m." : "a.m.";
	cout << am_pm;
}
