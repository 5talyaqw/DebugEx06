#include "Shape.h"
#include "Circle.h"
#include "Quadrilateral.h"
#include "ShapeException.h"
#include <iostream>

//quadrilateral::quadrilateral() {}
Quadrilateral::Quadrilateral(std::string nam, std::string col, int h, int w) :Shape(nam, col) {

	//void setName(string nam); //PRIVATE DATA
	//void setColor(string col);
	setHeight(h);
	setWidth(w);

}
void Quadrilateral::draw()
{
	//quadrilateral p;
	std::cout << getName() << std::endl << getColor() << std::endl << "Width is " << getWidth() << std::endl << "Height is " << getHeight() << std::endl << "Area is " << MathUtils::CalRectangleArea(getWidth(), getHeight()) << std::endl << "Perimeter is " << MathUtils::CalPerimater(getHeight(),getWidth()) << std::endl;
	//cout << name << color;
}

void Quadrilateral::setHeight(int h) {
	height = h;
}
void Quadrilateral::setWidth(int w) {

	width = w;
}
int Quadrilateral::getHeight() {
	return height;
}
int Quadrilateral::getWidth() {
	return width;
}