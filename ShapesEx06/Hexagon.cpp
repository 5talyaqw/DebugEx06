#include "Hexagon.h"
#include "ShapeException.h"
#include "MathUtils.h"
#include <iostream>

Hexagon::Hexagon(std::string col, std::string nam, double side) : Shape(col, nam) 
{
    setSide(side);
}

void Hexagon::setSide(double s) 
{
    if (s < 0) 
    {
        throw ShapeException();
    }
    side = s;
}

double Hexagon::getSide() const 
{
    return side;
}

void Hexagon::draw() 
{
    std::cout << getName() << std::endl
        << getColor() << std::endl
        << "Side length is " << side << std::endl
        << "Area is " << MathUtils::CalHexagonArea(side) << std::endl;
}
