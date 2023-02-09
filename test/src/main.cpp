#include <iostream>
#include "Player.h"
#include "Item.h"
#include "Inventory.h"
int main(int argc, char const *argv[])
{
   Player player(30, 5, 2);
  Inventory inventory;
  inventory.addItem(Item("Sword", 2));
  player.addInventory(inventory);
  player.equipItem();

  std::cout << "Health: " << player.getHealth() << std::endl;
  std::cout << "Damage: " << player.getDamage() << std::endl;
  std::cout << "Defence: " << player.getDefence() << std::endl;
    return 0;
}
