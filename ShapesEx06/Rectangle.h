#pragma once
#include "Shape.h"
#include "Quadrilateral.h"
#include "MathUtils.h"
#include <iostream>

class rectangle : public Quadrilateral 
{
public:
	void draw();
	bool isSquare(int, int);
	//bool getisSquare();
	rectangle(std::string, std::string, int, int);


private:


};