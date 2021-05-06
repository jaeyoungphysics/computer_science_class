#ifndef EXAMPLE81
#define EXAMPLE81
#include <iostream>
using namespace std;
class Polygon {
  protected:
    int width, height;
  public:
    void set_values (int a, int b) {width=a; height=b;}
    virtual int area (void) = 0;
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


