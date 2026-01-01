#include "Pet.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>
#include <vector>
#include <memory> // for smart pointers
using namespace std;

int main() {
  Dog* myDog = new Dog();
  Cat* myCat = new Cat();

  myDog -> setName("Roofus");
  myCat -> setName("Luna");

  vector<Pet*> pets;
  pets.push_back(myDog);
  pets.push_back(myCat);

  for (Pet* pet : pets){
    pet -> makeSound();
  }

  return 0;
}
