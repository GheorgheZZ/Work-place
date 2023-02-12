#ifndef ENEMY_TROLL_H
#define ENEMY_TROLL_H
#include <iostream>
#include <string>
#include "Enemy.h"
#pragma once

class Enemy_troll : public Enemy {
 public:
  int getHealth() { return health; }
  int getDamage() { return damage; }
  int getDefence() { return defence; }
  std::string getType() { return "Troll"; }

 private:
  int health = 200;
  int damage = 40;
  int defence = 20;
};

#endif