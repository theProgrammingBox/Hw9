#include "Shape.h"

class Circle : public Shape
{
public:

    /*** CONSTRUCTOR & DESTRUCTOR ***/

    Circle () : r{0} { };
    Circle (int r) : r{r} { };
    virtual ~Circle () { };

    /*** ACCESSORS ***/

	virtual double calcPerimeter() const;
	virtual double calcArea() const;
    void Print() const;

    /*** MUTATORS ***/

    virtual void Move(int x, int y);
    virtual void UpdateDimensions();

private:
    int r;
};