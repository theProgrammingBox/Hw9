#pragma once
#include "Shape.h"

class Triangle : public Shape
{
public:
	Triangle() : length(0) {};
	Triangle(int length) : length(length) {};
	virtual ~Triangle() {};

	virtual double calcPerimeter() const;
	virtual double calcArea() const;

private:
	int length;
};