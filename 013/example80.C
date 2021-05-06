#include <iostream>
#include "example80.h"
int main() {
  Rectangle rect;
  Triangle trgl;
  Polygon poly;
  Polygon* ppoly1 = &rect;
  Polygon* ppoly2 = &trgl;
  Polygon* ppoly3 = &poly;
  ppoly1->set_values(4,5);
  ppoly2->set_values(4,5);
  ppoly3->set_values(4,5);
  cout << ppoly1->area() << '\n';
  cout << ppoly2->area() << '\n';
  cout << ppoly3->area() << '\n';
  return 0;
}

