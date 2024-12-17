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
    if (side < 0) {
        throw ShapeException();
    }
    return (3 * sqrt(3) * side * side) / 2;
}