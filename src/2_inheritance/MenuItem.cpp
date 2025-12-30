#include "MenuItem.hpp"
#include <iomanip>
#include <iostream>

void MenuItem::display() const{
  cout << fixed << setprecision(2);
  cout << name << " - $" << price << endl;
}