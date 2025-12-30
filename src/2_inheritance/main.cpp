#include <iostream>
#include "MexicanRestaurant.hpp"
#include "JapaneseRestaurant.hpp"
#include "MexicanJapaneseFusion.hpp"

using namespace std;

int main() {
    cout << "Testing Restaurant Inheritance Hierarchy:" << endl;

    MexicanRestaurant mexico("La Casa", "123 Spice Lane", 4);
    JapaneseRestaurant japan("Sakura", "456 Sushi Road", true);
    MexicanJapaneseFusion mexjap("Fusion Fiesta", "789 Fusion Ave", 3, true);
    
    mexico.displayInfo();
    mexico.describeCuisine();

    japan.displayInfo();
    japan.describeCuisine();

    mexjap.displayInfo();
    mexjap.describeCuisine();
    mexjap.displaySpeciality();

    MenuItem tacos("Tacos", 8.99);
    mexico.addMenuItem(tacos);
    MenuItem enchiladas("Enchiladas", 12.99);
    mexico.addMenuItem(enchiladas);

    MenuItem sushiroll("Sushi Roll", 14.99);
    japan.addMenuItem(sushiroll);
    MenuItem ramen("Ramen", 11.99);
    japan.addMenuItem(ramen);

    MenuItem sushitacos("Sushi Tacos", 15.99);
    mexjap.addMenuItem(sushitacos);
    MenuItem wasabi("Wasabi Guacamole", 7.99);
    mexjap.addMenuItem(wasabi);

    mexico.displayMenu();
    japan.displayMenu();
    mexjap.displayMenu();

    return 0;
}
