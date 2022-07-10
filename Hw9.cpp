#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"

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

void DrawShape(Shape &graphic, int x, int y);

int main ()
{
	Rectangle rectangle;
    rectangle.UpdateDimensions();
	cout << "Rectangle:" << endl;
	printPerimeter(rectangle);
	printArea(rectangle);
	print(rectangle);
	DrawShape(rectangle);
	printPerimeter(rectangle);
	printArea(rectangle);
	print(rectangle);
	cout << endl;

	return 0;
}

void printPerimeter(Shape &graphic)
{
	cout << "Perimeter: " << graphic.calcPerimeter() << endl;
}

void printArea(Shape &graphic)
{
    cout << "Area: " << graphic.calcArea() << endl;
}

void DrawShape(Shape &graphic, int x, int y)
{
    graphic.Move(x, y);
    graphic.UpdateDimensions();
}