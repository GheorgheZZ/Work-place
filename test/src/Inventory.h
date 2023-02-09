#ifndef INVENTORY_H
#define INVENTORY_H
#include <iostream>
#include <vector>
#include "Player.h"
#include "Item.h"
#include "Inventory.h"
#pragma once

class Inventory
{
public:
 Inventory() {};

  void addItem(const Item& item) { items.push_back(item); }

  void checkInventory() {
    std::cout << "Inventory:" << std::endl;
    for (int i = 0; i < items.size(); ++i) {
      std::cout << i + 1 << " - " << items[i].getName() << " (damage +" << items[i].getDamage() << ")" << std::endl;
    }
    std::cout << "select item" << std::endl;

    int itemIndex;
    std::cin >> itemIndex;
    if (itemIndex > 0 && itemIndex <= items.size()) {
      std::cout << "do you want to equip \"" << items[itemIndex - 1].getName() << " (damage +" << items[itemIndex - 1].getDamage() << ")\" ? enter 1 for yes, 2 for no." << std::endl;
      int equip;
      std::cin >> equip;
      if (equip == 1) {
        equippedItem = items[itemIndex - 1];
      }
    }
  }

  Item getEquippedItem() const { return equippedItem; }

private:
  std::vector<Item> items;
  Item equippedItem;
};

#endif