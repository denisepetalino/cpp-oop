#ifndef SORCERER_HPP
#define SORCERER_HPP

#include "Character.hpp"
class Sorcerer:public Character{
  public:
  Sorcerer();
  void attack() override;
};


#endif 
