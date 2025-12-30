#include "MexicanJapaneseFusion.hpp"
#include <iostream>

MexicanJapaneseFusion::MexicanJapaneseFusion(string name, string address, int spiceLevel, bool hasTatami)
  : Restaurant(name, address), MexicanRestaurant(name, address, spiceLevel), JapaneseRestaurant(name, address, hasTatami) {}

void MexicanJapaneseFusion::describeCuisine(){
  cout << "A unique fusion of Mexican and Japanese cuisines";
}

void MexicanJapaneseFusion::displaySpeciality(){
  cout << "Our specialties combine both cuisines - try our Sushi Tacos and Wasabi Guacamole!";
}
