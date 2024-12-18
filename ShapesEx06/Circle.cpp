#include "Shape.h"
#include "Circle.h"
#include "shapeException.h"
#include <iostream>

Circle::Circle(std::string nam, std::string col, double rad) :Shape(col, nam) 
{
	//void setName(string nam);
	//void setColor(string col); <-this redefines it d/n use
	setRad(rad);
}
void Circle::draw()
{
	std::cout << std::endl << "Color is " << getColor() << std::endl << "Name is " << getName() << std::endl << "radius is " << getRad() << std::endl << "Circumference: " << MathUtils::CalCircumference(getRad()) << "Area:" <<MathUtils::CalCircleArea(getRad()) << std::endl;;
}

void Circle::setRad(double rad) 
{
	if (rad < 0)
	{
		throw ShapeException();
	}
	radius = rad;
}

double Circle::getRad() 
{

	return radius;
}