#include "Pet.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "MagicPet.hpp"
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

  MagicPet* myMagicPet = new MagicPet();
  myMagicPet -> setName("Denise");
  pets.push_back(myMagicPet);

  for (Pet* pet : pets){
    pet -> makeSound();
  }

  for(Pet* pet : pets){
    MagicPet* magic = dynamic_cast<MagicPet*>(pet);
    if (magic){
      magic -> doTrick();
    }
  }

  return 0;
}
