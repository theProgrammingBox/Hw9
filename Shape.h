#pragma once
#include "Header.h"

class Shape
{
public:

   /*** CONSTRUCTOR & DESTRUCTOR ***/
    
	Shape() : x{0}, y{0} { };
	Shape(int x, int y) : x{x}, y{y} { };
	virtual ~Shape() {};

    /*** ACCESSORS ***/

	virtual double calcPerimeter() const;
	virtual double calcArea() const;
    void Print() const;

    /*** MUTATORS ***/

    virtual void Move(int x, int y);
    virtual void UpdateDimensions();

private:
	int x;
	int y;
};