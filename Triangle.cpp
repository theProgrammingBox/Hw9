#include "Triangle.h"

double Triangle::calcPerimeter() const
{
	return 3 * length;
}

double Triangle::calcArea() const
{
	return (length * length) / 2;
}
