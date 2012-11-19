#include "rectangle.h"

// RECTANGLE CLASS IMPLEMANTATION

//Parameterized constructor
Rectangle::Rectangle(double w, double l): width(w), length(l) {} // Inicializarion list

void Rectangle::setWidth(double w)
{
     width = w;
}

void Rectangle::setLength(double l)
{
     length = l;
}

double Rectangle::getWidth() const
{
       return width;
}

double Rectangle::getLength() const
{
       return length;
}

double Rectangle::getPerimeter() const
{
       return 2.0 * (width + length);
}

double Rectangle::getArea() const
{
       return width*length;
}
// END OF IMPLEMANTATION
