#include <iostream>
#include <iomanip>

#ifndef RECTANGLE_H
#define RECTANGLE_H

using namespace std;

// Class Specifications

class Rectangle
{
      private: double width;
               double length;
               
      public:  
               // Constructor
               
               Rectangle (double = 0.0, double = 0.0); // constructor parametrizado
               
               //Mutators
               
               void setWidth(double) ;
               void setLength(double);
               
               //Accessors
               
               double getWidth() const;
               double getLength() const;
               double getPerimeter() const;
               double getArea() const;
               
};

#endif
