#ifndef RESTAURANT_HPP
#define RESTAURANT_HPP

#include <string>
#include <vector>
using namespace std;

class Restaurant {
  private:
  string name;
  string address;
  public:
  Restaurant(string n, string adr);
  void displayInfo();
};

#endif
