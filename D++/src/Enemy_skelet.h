#ifndef ENEMY_TROLL_H
#define ENEMY_TROLL_H
#include <iostream>
#include <string>
#include "Enemy.h"
#pragma once

class Enemy_skelet : public Enemy {
 public:
  int getHealth() { return health; }
  int getDamage() { return damage; }
  int getDefence() { return defence; }
  std::string getType() { return "Skelet"; }

 private:
  int health = 70;
  int damage = 11;
  int defence = 1;
};

#endif