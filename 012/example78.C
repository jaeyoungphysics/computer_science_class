#include <iostream>
#include "example74.h"

class Test {
private:
  int val;
public:
  Test() {printf("Constructor: %p\n",this);}
  ~Test() {printf("Destructor: %p\n",this);}
};

int main() {

  printf("[Case1]\n new Test[5]\n");
  Test* test = new Test[5];
  printf("\ndelete[] test\n");
  delete[] test;
 
  printf("[Case2]\n new Test*[2]\n");
  Test** test1 = new Test*[2];
  for(int i=0; i<2; i++) {
	printf("  %d\n",i);
	test1[i] = new Test[2];
  }
  
  delete[] test1;
  return 0;
}

