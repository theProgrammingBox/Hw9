#include "Rectangle.h"
#include "Triangle.h"

void printPerimeter(Shape &graphic);

void printArea(Shape &graphic);

//void printPerimeter(Shape *graphic);
//
//void printArea(Shape *graphic);

int main ()
{
//	Rectangle *rectangle = new Rectangle(10,5);
//	Triangle  *triangle = new Triangle(10);

	int recL;
	int recW;
	int triL;

	cout << PrintHeaderSS("HW09", 'L', 9);

	cout << "Enter length for rectangle: ";
	cin  >> recL;
	cout << "Enter width for rectangle: ";
	cin  >> recW;

	Rectangle rectangle(recL,recW);

	cout << "Rectangle:" << endl;
	printPerimeter(rectangle);
	printArea(rectangle);
	cout << endl;

	cout << "Enter length for triangle: ";
	cin  >> triL;

	Triangle triangle(triL);

	cout << "Triangle:" << endl;
	printPerimeter(triangle);
	printArea(triangle);

//	delete rectangle;
//	delete triangle;

	return 0;
}

//void printPerimeter(Shape *graphic)
//{
//	cout << "Perimeter: " << graphic->calcPerimeter() << endl;
//}
//
//void printArea(Shape *graphic)
//{
//    cout << "Area: " << graphic->calcArea() << endl;
//}

void printPerimeter(Shape &graphic)
{
	cout << "Perimeter: " << graphic.calcPerimeter() << endl;
}

void printArea(Shape &graphic)
{
    cout << "Area: " << graphic.calcArea() << endl;
}

string PrintHeaderSS(string  asName,  // IN - assignment Name - used for output
				     char    asType,  // IN - assignment type
				                      //    - (LAB or ASSIGN) - used for output
				     int     asNum)   // IN - assign. Number  - used for output
{
	ostringstream output; // used to store thing want to output

	output << left;
	output << "**************************************************\n";
	output << "* PROGRAMMED BY : Hank Lin\n";
	output << "* " << setw(14) << "STUDENT ID" << ": 1211983\n";
	output << "* " << setw(14) << "CLASS" << ": CS1C - MTWTh - 5:30pm\n";
	output << "* " ;

	// PROCESSING - This will adjust setws and format appropriately
	//              based on if this is a lab 'L' or assignment
	if (toupper(asType) == 'L')
	{
		output << "LAB #" << setw(9);
	} // END - if (toupper(asType) == 'L')
	else
	{
		output << "ASSIGNMENT #" << setw(2);
	} // END - else
	output << asNum << ": " << asName << endl;
	output << "**************************************************\n\n";
	output << right;

	return output.str();
}
