#pragma once
#include <iostream>
#include <cmath>
#include <string>

class MathUtils
{
public:

    //areas
    static double CalPentagonArea(double side);
    static double CalHexagonArea(double side);
    static double CalRectangleArea(double width, double height);
    static double CalCircleArea(double radius);
    static double CalParallelogramArea(double width, double height);

    //CalPerimater or circumference
    static double CalPerimater(double height, double width);
    static double CalCircumference(double radius);
};
