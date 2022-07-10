#include "Rectangle.h"

/*
virtual double calcPerimeter() const;
virtual double calcArea() const;
void Print() const;

virtual void UpdateDimensions(int length, int width);
*/

/*************************************************************************
* Method calcPerimeter: Class Rectangle
*------------------------------------------------------------------------
* This function calculate the perimeter of rectangle.
*------------------------------------------------------------------------
* PRE-CONDITIONS
* 		none
*
* POST-CONDITIONS
* 		return the perimeter of rectangle
*************************************************************************/
double Rectangle::calcPerimeter() const 
{
    return 2 * (length + width);
}

/*************************************************************************
* Method calcArea: Class Rectangle
*------------------------------------------------------------------------
* This function calculate the area of rectangle.
*------------------------------------------------------------------------
* PRE-CONDITIONS
* 		none
*
* POST-CONDITIONS
* 		return the area of rectangle
*************************************************************************/
double Rectangle::calcArea() const 
{
    return length * width;
}

/*************************************************************************
* Method Print: Class Rectangle
*------------------------------------------------------------------------
* This function print the coordinates of rectangle.
*------------------------------------------------------------------------
* PRE-CONDITIONS
* 		none
*
* POST-CONDITIONS
* 		It will print the x coordinate and y coordinate of rectangle.
*************************************************************************/
void Rectangle::Print() const 
{
    Shape::Print();
}

/*************************************************************************
* Method Move: Class Rectangle
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
void Rectangle::Move(int x, int y)
{
    Shape::Move(x, y);
}

/*************************************************************************
* Method UpdateDimensions: Class Rectangle
*------------------------------------------------------------------------
* This function will update the length and width of rectangle.
*------------------------------------------------------------------------
* PRE-CONDITIONS
* 		none
*
* POST-CONDITIONS
* 		It will update the length and width of rectangle.
*************************************************************************/
void Rectangle::UpdateDimensions()
{
    cout << "Enter the length of rectangle: ";
    cin >> this->length;
    cout << "Enter the width of rectangle: ";
    cin >> this->width;
}