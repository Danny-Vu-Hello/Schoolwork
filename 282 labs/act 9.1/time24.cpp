#include "time12.h"
#include "time24.h"
#include <iostream>

using namespace std;

time24()
{
	hours,minutes,seconds = 0; 
}

time24(int h, int m, int s) //3-arg constructor
{
	hours = h;
	minutes = m;
	seconds = s; 
}

time24(time12 t12)
{
	hours = t12.gethrs();
	minutes = t12.getmins();
	seconds = 0;
}

int time24::gethrs()
{
	return hours;
}

int time24::getmins()
{
	return minutes;
}	

void time24::display() const //format: 23:15:01
{
	if(hours < 10) cout << '0';
	cout << hours << ':';
	if(minutes < 10) cout << '0';
	cout << minutes << ':';
	if(seconds < 10) cout << '0';
	cout << seconds;
}

operator time12(void)
{
	int temp = (hours%12)+1;
    minutes = minutes;
    if (hours/12==1)
    {
    	return time12(true, temp, minutes);
	}
	else
	{
		return time12(false, temp, minutes);
	}
}
