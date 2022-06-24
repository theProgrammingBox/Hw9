#pragma once
#include "Header.h"

class Shape
{
public:
	Shape() : length(0), width(0) {};
	Shape(int length, int width) : length (length), width (width) {};
	virtual ~Shape() {};

	virtual double calcPerimeter() const {return 0;}
	virtual double calcArea() const {return 0;}


private:
	int length;
	int width;
};