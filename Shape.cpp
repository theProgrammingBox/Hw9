#include "Shape.h"

Shape::~Shape()
{

}

/*************************************************************************
* Method calcPerimeter: Class Shape
*------------------------------------------------------------------------
* This function calculate the perimeter of the shape.
*------------------------------------------------------------------------
* PRE-CONDITIONS
* 		none
*
* POST-CONDITIONS
* 		return 0
*************************************************************************/
double Shape::calcPerimeter() const
{
    return 0;
}

/*************************************************************************
* Method calcArea: Class Shape
*------------------------------------------------------------------------
* This function calculate the area of the shape.
*------------------------------------------------------------------------
* PRE-CONDITIONS
* 		none
*
* POST-CONDITIONS
* 		return 0
*************************************************************************/
double Shape::calcArea() const
{
    return 0;
}

/*************************************************************************
* Method Print: Class Shape
*------------------------------------------------------------------------
* This function print the coordinates of the shape.
*------------------------------------------------------------------------
* PRE-CONDITIONS
* 		none
*
* POST-CONDITIONS
* 		It will print the x coordinate and y coordinate of the shape.
*************************************************************************/
void Shape::Print() const
{
    cout << "X: " << x << " Y: " << y << endl;
}

/*************************************************************************
* Method Move: Class Shape
*------------------------------------------------------------------------
* This function will add some x and y coordinate of the shape.
*------------------------------------------------------------------------
* PRE-CONDITIONS
* 		int x: the amount to add to the x coordinate
*       int y: the amount to add to the y coordinate
*
* POST-CONDITIONS
* 		It will add the x and y coordinate of the shape.
*************************************************************************/
void Shape::Move(int x, int y)
{
    this->x += x;
    this->y += y;
}