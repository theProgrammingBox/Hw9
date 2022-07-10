#pragma once
#include "Shape.h"

class Rectangle : public Shape
{
public:
	Rectangle() : length(0), width(0) {};
	Rectangle(int length, int width) : length(length), width(width) {};
	virtual ~Rectangle() {};

	virtual double calcPerimeter() const;
	virtual double calcArea() const;

private:
	int length;
	int width;
};