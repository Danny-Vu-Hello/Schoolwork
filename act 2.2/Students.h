//Danny Vu
//Luis Ortiz Baca
#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;

class Student
{
	public:
		Student();
		Student(string name, int score);
		~Student();
		void print();
	private:
		string sname;
		int sscore;
		char sgrade;
};

#endif

