#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <vector>
#include "Player.h"
#include "Item.h"
#include "Inventory.h"
#pragma once

class Player
{
public:
   Player(int health, int damage, int defence) : health(health), damage(damage), defence(defence) {}

  int getHealth() const { return health; }
  int getDamage() const { return damage; }
  int getDefence() const { return defence; }

  void addInventory(const Inventory& inventory) {
    this->inventory = inventory;
  }

  void equipItem() {
    inventory.checkInventory();
    Item equippedItem = inventory.getEquippedItem();
    damage += equippedItem.getDamage();
  }

private:
  int health;
  int damage;
  int defence;
  Inventory inventory;

};

#endif