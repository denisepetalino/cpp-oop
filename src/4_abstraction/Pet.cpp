#include "Pet.hpp"
#include <iostream>
using namespace std;

string Pet::getName(){
  return name;
}

int Pet::getAge(){
  return age;
}

void Pet::eat(){
  cout << name << " is eating!" << endl;  
}

void Pet::setName(string name) {
  this->name = name;
}

void Pet::setAge(int age) {
  this->age = age;
}