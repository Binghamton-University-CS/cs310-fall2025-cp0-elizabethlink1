#include <iostream>
#include <stdlib.h>
#include "Animal.h"
#include "AnimalsInZoo.h"

using namespace std;

int main() {
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);
   Animal animal3("Bearded Dragon", 1829);

   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);

   animal2.display();
   animal3.display();
   animal1->display();

   delete animal1;

   // Adding a AnimalsInZoo Class
   AnimalsInZoo zoo1(animal3); // create a AnimalsInZoo object + add an animal to it

   // call display()
   zoo1.display();

}
