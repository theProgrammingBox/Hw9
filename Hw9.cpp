/*************************************************************************
 * AUTHOR     	 : Justin Gea
 * Assignment #9 : Virtual Functions & Abstract Classes
 * CLASS      	 : CS 1C
 * SECTION    	 : MTWTTH 03:00pm - 05:35pm
 * DUE DATE   	 : 07/12/2022
 *************************************************************************/

#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"

/**********************************************************
 *
 * Virtual Functions & Abstract Classes
 *_________________________________________________________
 * This program will demonstrate the use of virtual functions
 * and abstract classes by creating derived classes 
 * Rectangle, Triangle, and Circle while checking the
 * virtual functions and abstract classes.
 *_________________________________________________________
 * INPUT:
 * x: The x coordinate of the shape.
 * y: The y coordinate of the shape.
 * The shape specific variables of the shape.
 *
 * OUTPUT:
 * The shape specific variables of the shape.
 ***********************************************************/

/*
3.  Do we need to override Move for derived classes? Explain?

    No, we don't need to override Move for derived classes.
    The base class Move function will be called automatically.
    The derived classes will only need to override UpdateDimensions.
 
4.  What kind of binding is occurring for Print vs 
UpdateDimensions ? Explain the difference between static and 
dynamic binding, static and dynamic polymorphism? 

    Static binding occurs when the compiler knows the type of the 
    object at compile time. Dynamic binding occurs when the 
    compiler doesn't know the type of the object at compile time.
    Static polymorphism occurs when the compiler knows the type of 
    the object at compile time. Dynamic polymorphism occurs when 
    the compiler doesn't know the type of the object at compile 
    time.
 
5.  Write the function prototype and definition for a global 
function DrawShape which will invoke the Move and 
UpdateDimensions virtual functions. Explain the importance of 
Interface Inheritance and how this applies to DrawShape. 
    
    DrawShape() will invoke the Move and UpdateDimensions virtual 
    functions. Interface Inheritance is the concept of a class 
    inheriting from another class. This means that the class 
    inheriting from the base class will have access to the 
    functions of the base class. This is called Interface 
    Inheritance.
*/

void printPerimeter(Shape &graphic);

void printArea(Shape &graphic);

void DrawShape(Shape &graphic);

int main ()
{
	cout << "Rectangle:" << endl;
	Rectangle rectangle;
	DrawShape(rectangle);
	printPerimeter(rectangle);
	printArea(rectangle);
	rectangle.Print();
	cout << endl;

    cout << "Triangle:" << endl;
    Triangle triangle;
    DrawShape(triangle);
    printPerimeter(triangle);
    printArea(triangle);
    triangle.Print();
    cout << endl;

    cout << "Circle:" << endl;
    Circle circle;
    DrawShape(circle);
    printPerimeter(circle);
    printArea(circle);
    circle.Print();
    cout << endl;

	return 0;
}

/*************************************************************************
 * Method printPerimeter: Class non
 *------------------------------------------------------------------------
 * This function will invoke the calcPerimeter function of the
 * derived class.
 *------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		none
 *
 * POST-CONDITIONS
 * 		It will print the perimeter of the derived class
 *************************************************************************/

void printPerimeter(Shape &graphic)
{
	cout << "Perimeter: " << graphic.calcPerimeter() << endl;
}

/*************************************************************************
 * Method printArea: Class non
 *------------------------------------------------------------------------
 * This function will invoke the calcArea function of the
 * derived class.
 *------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		none
 *
 * POST-CONDITIONS
 * 		It will print the area of the derived class
 *************************************************************************/

void printArea(Shape &graphic)
{
    cout << "Area: " << graphic.calcArea() << endl;
}

/*************************************************************************
 * Method DrawShape: Class non
 *------------------------------------------------------------------------
 * This function will invoke the Move and UpdateDimensions virtual 
 * functions.
 *------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		none
 *
 * POST-CONDITIONS
 * 		It will change the x and y coordinates of the derived class
 *      and change the dimensions of the derived class.
 *************************************************************************/

void DrawShape(Shape &graphic)
{
    int x, y;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;
    graphic.Move(x, y);
    graphic.UpdateDimensions();
}