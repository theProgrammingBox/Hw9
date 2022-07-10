#pragma once
#include "Shape.h"

class Rectangle : public Shape
{
public:

    /*** CONSTRUCTOR & DESTRUCTOR ***/

	Rectangle() : length(0), width(0) {};
	Rectangle(int length, int width) : length(length), width(width) {};
	virtual ~Rectangle() {};

    /*** ACCESSORS ***/

	virtual double calcPerimeter() const;
	virtual double calcArea() const;
    void Print() const;

    /*** MUTATORS ***/

    virtual void Move(int x, int y);
    virtual void UpdateDimensions();

private:
	int length;
	int width;
};