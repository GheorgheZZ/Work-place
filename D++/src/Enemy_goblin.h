#ifndef ENEMY_GOBLIN_H
#define ENEMY_GOBLIN_H
#include <iostream>
#include <string>
#include "Enemy.h"
#pragma once

class Enemy_goblin : public Enemy {
 public:
  int getHealth() { return health; }
  int getDamage() { return damage; }
  int getDefence() { return defence; }
  std::string getType() { return "Goblin"; }

 private:
  int health = 100;
  int damage = 20;
  int defence = 10;
};

#endif