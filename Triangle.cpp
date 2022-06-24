#include "Triangle.h"

double Triangle::calcPerimeter() const
{
	return 3.0 * length;
}

double Triangle::calcArea() const
{
	return (length * length) / 2.0;
}
