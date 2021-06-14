#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
	public:
		Rectangle();
		Rectangle(double w, double h);
		double getWidth();
		double getHeight();
		void setWidth(double dw);
		void setHeight(double dh);
		double getArea();
		double getPerimeter();
	private:
		double width,height;
};
#endif
