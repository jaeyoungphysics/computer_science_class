#include <iostream>
#include "example82.h"
int main() {
  Rectangle rect;
  Triangle trgl;
  Polygon* ppoly1 = &rect;
  Polygon* ppoly2 = &trgl;
  ppoly1->set_values(4,5);
  ppoly2->set_values(4,5);
  ppoly1->printarea();
  ppoly2->printarea();
  return 0;
}

