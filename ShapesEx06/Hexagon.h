#pragma once
#include "Shape.h"
#include "MathUtils.h"
#include <string>

class Hexagon : public Shape
{
public:
    Hexagon(std::string col, std::string nam, double side);

    void draw() override;
    void setSide(double side);
    double getSide() const;

private:
    double side;
};
