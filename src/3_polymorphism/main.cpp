#include <vector>
#include "Warrior.hpp"
#include "Sorcerer.hpp"

using namespace std;

int main() {
  vector<Character*> characters;
  characters.push_back(new Warrior("John", 120, 20));
  characters.push_back(new Sorcerer("Debis", 40, 10));

  for (Character* character : characters){
    character->attack();
    character->displayInfo();
  }

  Character* characterPtr = new Warrior("Ellie", 110, 18);
  characterPtr->attack();
  characterPtr->displayInfo();

  Warrior* warriorPtr = dynamic_cast<Warrior*>(characters[0]);
    if (warriorPtr != nullptr) {
        warriorPtr->specialAttack();
    } else {
        std::cout << "Downcast failed: first character is not a Warrior." << std::endl;
    }

  for (Character* c : characters) {
        delete c;
    }
    characters.clear();

    delete characterPtr;

    


  return 0;
}
