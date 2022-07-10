#include "Rectangle.h"

double Rectangle::calcPerimeter() const
{
	return 2 * (length + width);
}

double Rectangle::calcArea() const
{
	return (length * width);
}
