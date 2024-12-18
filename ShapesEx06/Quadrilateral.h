#pragma once

#include "Shape.h"
#include <iostream>


class Quadrilateral :public Shape
{
public:
	void draw();
	//Quadrilateral();
	Quadrilateral(std::string, std::string, int, int);
	void setHeight(int h);
	void setWidth(int w);
	int getHeight();
	int getWidth();


private:
	int width;
	int height;

};