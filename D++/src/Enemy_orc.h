#ifndef ENEMY_ORC_H
#define ENEMY_ORC_H
#include <iostream>
#include <string>
#include "Enemy.h"
#pragma once

class Enemy_orc : public Enemy {
 public:
  int getHealth() { return health; }
  int getDamage() { return damage; }
  int getDefence() { return defence; }
  std::string getType() { return "Orc"; }

 private:
  int health = 150;
  int damage = 30;
  int defence = 15;
};

#endif