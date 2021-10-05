//Danny Vu
//Luis Ortiz Baca
#include "Students.h"
#include <string>

using namespace std;

int main()
{
	Student s[5] = {Student("Tom",85),Student("Alice",71),Student("Jack",93),Student("Janet",76),Student("John",66)};
	for (int i = 0;i<5;i++)
	{
		s[i].print();
	}
}
