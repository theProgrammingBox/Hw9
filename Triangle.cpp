#include "Triangle.h"

/*
virtual double calcPerimeter() const;
virtual double calcArea() const;
void Print() const;
virtual void UpdateDimensions(int length1, int length2, int length3);
*/

/*************************************************************************
* Method calcPerimeter: Class Triangle
*------------------------------------------------------------------------
* This function calculate the perimeter of triangle.
*------------------------------------------------------------------------
* PRE-CONDITIONS
* 		none
*
* POST-CONDITIONS
* 		return the perimeter of triangle
*************************************************************************/
double Triangle::calcPerimeter() const 
{
    return length1 + length2 + length3;
}

/*************************************************************************
* Method calcArea: Class Triangle
*------------------------------------------------------------------------
* This function calculate the area of triangle.
*------------------------------------------------------------------------
* PRE-CONDITIONS
* 		none
*
* POST-CONDITIONS
* 		return the area of triangle
*************************************************************************/
double Triangle::calcArea() const 
{
    double s = calcPerimeter() / 2.0;
    return sqrt(s * (s - length1) * (s - length2) * (s - length3));
}

/*************************************************************************
* Method Print: Class Triangle
*------------------------------------------------------------------------
* This function print the coordinates of triangle.
*------------------------------------------------------------------------
* PRE-CONDITIONS
* 		none
*
* POST-CONDITIONS
* 		It will print the x coordinate and y coordinate of triangle
*************************************************************************/
void Triangle::Print() const 
{
    cout << "X: " << x << " Y: " << y << endl;
}

/*************************************************************************
* Method UpdateDimensions: Class Triangle
*------------------------------------------------------------------------
* This function will update the length of triangle.
*------------------------------------------------------------------------
* PRE-CONDITIONS
*       none
* POST-CONDITIONS
* 		It will update the length of triangle
*************************************************************************/
void Triangle::UpdateDimensions()
{
    cout << "Enter the length of the first side: ";
    cin >> this->length1;
    cout << "Enter the length of the second side: ";
    cin >> this->length2;
    cout << "Enter the length of the third side: ";
    cin >> this->length3;
}