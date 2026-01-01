#ifndef WARRIOR_HPP
#define WARRIOR_HPP

#include "Character.hpp"
class Warrior: public Character{
  public:
  Warrior();
  void attack() override;
  void specialAttack();
};

#endif 
