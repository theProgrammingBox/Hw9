#include "Circle.h"

/*************************************************************************
* Method calcPerimeter: Class Circle
*------------------------------------------------------------------------
* This function calculate the perimeter of circle.
*------------------------------------------------------------------------
* PRE-CONDITIONS
* 		none
*
* POST-CONDITIONS
* 		return the perimeter of circle
*************************************************************************/
double Circle::calcPerimeter() const 
{
    return 3.14159 * 2 * r;
}

/*************************************************************************
* Method calcArea: Class Circle
*------------------------------------------------------------------------
* This function calculate the area of circle.
*------------------------------------------------------------------------
* PRE-CONDITIONS
* 		none
*
* POST-CONDITIONS
* 		return the area of circle
*************************************************************************/
double Circle::calcArea() const 
{
    return 3.14159 * r * r;
}

/*************************************************************************
* Method Print: Class Circle
*------------------------------------------------------------------------
* This function print the coordinates of circle.
*------------------------------------------------------------------------
* PRE-CONDITIONS
* 		none
*
* POST-CONDITIONS
* 		It will print the x coordinate and y coordinate of circle.
*************************************************************************/
void Circle::Print() const 
{
    Shape::Print();
}

/*************************************************************************
* Method Move: Class Circle
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
void Circle::Move(int x, int y)
{
    Shape::Move(x, y);
}

/*************************************************************************
* Method UpdateDimensions: Class Circle
*------------------------------------------------------------------------
* This function will update the radius of circle.
*------------------------------------------------------------------------
* PRE-CONDITIONS
* 		none
*
* POST-CONDITIONS
* 		It will update the radius of circle
*************************************************************************/
void Circle::UpdateDimensions() 
{
    cout << "Enter the radius: ";
    cin >> this->r;
}