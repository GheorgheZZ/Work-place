#include <iostream>
#include <vector>
#include <string>

class Item {
public:
  Item(std::string name, int damage) : name(name), damage(damage) {}

  std::string getName() const { return name; }
  int getDamage() const { return damage; }

private:
  std::string name;
  int damage;
};

class Inventory {
public:
  Inventory() {}

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

class Player {
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

int main() {
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