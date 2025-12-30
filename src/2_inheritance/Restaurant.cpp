#include "Restaurant.hpp"
#include <iostream>

Restaurant::Restaurant(string n, string adr) : name(n), address(adr){

}

void Restaurant::displayInfo(){
  cout << "Restaurant name: " << name;
  cout << "Restaurant address: " << address;
}

void describeCuisine(){
  cout << "This restaurant serves various types of cuisines.";
}