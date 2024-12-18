#pragma once
#include <iostream>
#include "MathUtils.h"

class Circle : public Shape
{
public:
    void draw();
    Circle(std::string color, std::string name, double radius);
    void setRad(double rad);
    double getRad();

private:
    double radius;
};
