#ifndef EXAMPLE82
#define EXAMPLE82

#include <iostream>
using namespace std;

class Polygon {
  protected:
    int width, height;
  public:
    void set_values (int a, int b) {width=a; height=b;}
    virtual int area (void) = 0;
    void printarea() {cout <<this->area()<<'\n';}
};
class Rectangle: public Polygon {
  public:
    int area() {return width*height;}
};
class Triangle: public Polygon {
  public:
    int area() {return width*height/2;}
};
#endif


