#include "Pentagon.h"
#include "ShapeException.h"
#include <iostream>

Pentagon::Pentagon(std::string col, std::string nam, double side) : Shape(col, nam) 
{
    setSide(side);
}

void Pentagon::setSide(double s) 
{
    if (s < 0) 
    {
        throw ShapeException();
    }
    side = s;
}

double Pentagon::getSide() const 
{
    return side;
}

void Pentagon::draw() 
{
    std::cout << getName() << std::endl
        << getColor() << std::endl
        << "Side length is " << side << std::endl
        << "Area is " << MathUtils::CalPentagonArea(side) << std::endl;
}
