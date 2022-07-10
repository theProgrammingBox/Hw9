#pragma once
#include "Shape.h"

class Triangle : public Shape
{
public:

    /*** CONSTRUCTOR & DESTRUCTOR ***/

	Triangle() : length1(0), length2(0), length3(0) {};
	Triangle(int length1, int length2, int length3) : length1(length1), length2(length2), length3(length3) {};
	virtual ~Triangle() {};
    
    /*** ACCESSORS ***/

	virtual double calcPerimeter() const;
	virtual double calcArea() const;
    void Print() const;

    /*** MUTATORS ***/

    virtual void UpdateDimensions();

private:
	int length1;
    int length2;
    int length3;
};