#ifndef TIME12_H
#define TIME12_H
#include <iostream>
#include "time24.h"

class time24;
class time12
{
	private:
		bool pm; //true = pm, false = am
		int hrs; //1 to 12
		int mins; //0 to 59
	public: 
		time12(); //no-arg constructor
		time12(bool ap, int h, int m);//3-arg constructor
		time12(time24 t24);
		void display() const;
};

#endif
