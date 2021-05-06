#include <iostream>   // includes std
class Animal {
public:
  virtual void eat() {std::cout << "I'm eating food.\n";}
};
class Cat: public Animal { 
public:
  void eat() {std::cout << "I'm eating rats\n";}  
};

void func(Animal *xyz) {xyz->eat();}

int main() {
  Animal *animal = new Animal;
  Cat *cat = new Cat;
  func(animal);
  func(cat);
  return 0;
}



