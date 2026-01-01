#include "Warrior.hpp"

Warrior::Warrior() : Character(){
}

void Warrior::attack(){
  cout << "Swings a mighty sword!" << endl;
}

void Warrior::specialAttack(){
  cout << name << "a devastating double strike!" << endl;
}