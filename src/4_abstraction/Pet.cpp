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