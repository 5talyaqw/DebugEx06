#include "MathUtils.h"
#include "ShapeException.h"
#include <cmath> 

#define PI 3.14159
double MathUtils::CalPentagonArea(double side) 
{
    if (side < 0) 
    {
        throw ShapeException();
    }
    return (5 * side * side) / (4 * tan(PI / 5));
}


double MathUtils::CalHexagonArea(double side) 
{
    if (side < 0) 
    {
        throw ShapeException();
    }
    return (3 * sqrt(3) * side * side) / 2;
}

double MathUtils::CalRectangleArea(double width, double height)
{
    if (width < 0 || height < 0)
    {
        throw ShapeException();
    }
    return width * height;
}

double MathUtils::CalCircleArea(double radius)
{
    double area = 3.14 * radius * radius;
    return area;
}

double MathUtils::CalParallelogramArea(double width, double height)
{
    if (width < 0 || height < 0)
    {
        throw ShapeException();
    }
    return width * height;
}

double MathUtils::CalPerimater(double height, double width)
{
    return 2 * (height + width);
}

double MathUtils::CalCircumference(double radius)
{
    double circumference = 2 * (3.14) * radius;
    if (circumference < 0)
    {
        throw ShapeException();
    }
    return circumference;
}
