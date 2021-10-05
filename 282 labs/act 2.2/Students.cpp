//Danny Vu
//Luis Ortiz Baca
#include "Students.h"
#include <string>
#include <iostream>
using namespace std;

Student::Student()
{	
}

Student::Student(string name, int score)
{
	sname = name;
	sscore = score;
	if (score>89)
		sgrade = 'A';
	else if (score>79)
		sgrade = 'B';
	else if (score>69)
		sgrade = 'C';
	else if (score>59)
		sgrade = 'D';
	else
		sgrade = 'F';
}

Student::~Student()
{
}

void Student::print()
{
	cout << sname << " " << sscore << " " << sgrade << endl;
}
