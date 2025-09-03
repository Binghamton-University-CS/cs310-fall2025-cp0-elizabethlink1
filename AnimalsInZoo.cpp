#include "AnimalsInZoo.h"
#include <iostream>

using namespace std;

AnimalsInZoo::AnimalsInZoo() {
  numAnimals = 0;
  animal = Animal(); // default
}

AnimalsInZoo::AnimalsInZoo(const Animal& a) {
  numAnimals = 1;
  animal = a;
}

void AnimalsInZoo::display() {
  cout << "numAnimals = " << numAnimals << endl;
  if (numAnimals > 0) {
    animal.display();
  }
}
