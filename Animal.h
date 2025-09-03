// including header guards so Animal.h only compiles once
#ifndef ANIMAL_H
#define ANIMAL_H

#include <string> // added to fix std::string errors

class Animal {
public:
  Animal(std::string speciesName, unsigned int discoveryYear);
  // added std:: to fix errors and cuz headers shouldn't use- using namespace std
  Animal();

  void display();

private:
  std::string species;
  unsigned int year_discovered;
};

#endif
