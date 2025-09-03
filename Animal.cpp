#include "Animal.h"
#include <iostream> // added to fix std::cout errors
using namespace std;

Animal::Animal(std::string speciesName, unsigned int discoveryYear) {
  species = speciesName;
  year_discovered = discoveryYear;
}
//Animal:: for compiler to know implementations belong to Animal class

Animal::Animal() : species(""), year_discovered(0) {};

void Animal::display() {
  cout << species << " [" << year_discovered << "]" << endl;
}
