#ifndef TIME24_H
#define TIME24_H
#include <iostream>
#include "time12.h"

class time12;
class time24
{
	private:
		int hours; //0 to 23
		int minutes; //0 to 59
		int seconds; //0 to 59
	public: 
		time24(); //no-arg constructor
		time24(int h, int m, int s); //3-arg constructor
		int gethrs();
		int getmins();	
		void display() const;
};

#endif
