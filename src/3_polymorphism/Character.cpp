#include "Character.hpp"

using namespace std;

Character::Character(){
  this->name = "Elden King";
  this->health = 100;
  this->power = 10;
}

Character::Character(string name, int health, int power){
  this->name = name;
  this->health = health;
  this->power = power;
}

void Character::attack(){
  cout << "Basic Low Attack" << endl;
}

void Character::displayInfo(){
  cout << "Name: " << name << endl;
  cout << "Health: " << health << endl;
  cout << "Power: " << power << endl;
}