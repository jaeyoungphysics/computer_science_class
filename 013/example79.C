#include <iostream>
#include "example79.h"
int main() {
  Rectangle rect;
  Triangle trgl;
  Polygon* ppoly1 = &rect;
  Polygon* ppoly2 = &trgl;
  ppoly1->set_values(4,5);
  ppoly2->set_values(4,5);
  cout << rect.area() << '\n';
  cout << trgl.area() << '\n';
  return 0;
}

