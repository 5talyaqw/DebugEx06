#pragma once
#include "Shape.h"
#include "MathUtils.h"
#include <string>

class Pentagon : public Shape 
{
public:
    Pentagon(std::string col, std::string nam, double side);

    void draw() override;
    void setSide(double side);
    double getSide() const;

private:
    double side;
};
