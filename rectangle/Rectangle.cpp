#include "Rectangle.h"

Rectangle::Rectangle()
{
	width = height = 1;
}

Rectangle::Rectangle(double w,double h)
{
	width = w;
	height = h;
}

double Rectangle::getWidth() 
{
	return width;
}

double Rectangle::getHeight() 
{
	return height;
}

void Rectangle::setWidth(double dw)
{
	width = dw;
}

void Rectangle::setHeight(double dh)
{
	height = dh;
}

double Rectangle::getArea()
{
	return width*height;
}

double Rectangle::getPerimeter()
{
	return 2*(width+height);
}
