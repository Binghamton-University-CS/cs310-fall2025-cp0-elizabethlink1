#ifndef ANIMALSINZOO_H
#define ANIMALSINZOO_H

#include "Animal.h"

class AnimalsInZoo {
 public:
  AnimalsInZoo(); // defult, 0 animals
  AnimalsInZoo(const Animal& a); // contructor with animal

  void display();

 private:
  int numAnimals;
  Animal animal; // for one animal
};

#endif
