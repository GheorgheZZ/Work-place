#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <vector>
#include "Player.h"
#include "Item.h"
#include "Inventory.h"
#pragma once

class Item {
public:
  Item(std::string name, int damage) : name(name), damage(damage) {}

  std::string getName() const { return name; }
  int getDamage() const { return damage; }

private:
  std::string name;
  int damage;
};

#endif