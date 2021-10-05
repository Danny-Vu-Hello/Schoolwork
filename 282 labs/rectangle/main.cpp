#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	Rectangle r1(4,40);
	Rectangle r2(3.5,35.9);
	cout << "Displaying Rectangle 1's width: " << r1.getWidth() << ", height: " << r1.getHeight() << ", area: " << r1.getArea() << ", and perimeter:" << r1.getPerimeter() << "."<< endl;
	cout << "Displaying Rectangle 2's width: " << r2.getWidth() << ", height: " << r2.getHeight() << ", area: " << r2.getArea() << ", and perimeter:" << r2.getPerimeter() << "."<< endl;
	return 0;
}


