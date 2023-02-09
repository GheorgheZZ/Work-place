#include <iostream>
#include <string>

class Sword {
  public:
    std::string name;
    int damage;
    Sword(std::string name, int damage) : name(name), damage(damage) {}
};

class Inventory {
  private:
    Sword *items[3];
    int count = 0;

  public:
    void add_item(Sword *item) {
      if (count < 3) {
        items[count++] = item;
      } else {
        std::cout << "Inventory is full" << std::endl;
      }
    }

    void inventory_check() {
      std::cout << "Inventory:" << std::endl;
      for (int i = 0; i < count; i++) {
        std::cout << i + 1 << ". " << items[i]->name << " - Damage: " << items[i]->damage << std::endl;
      }
    }
};

int main() {
  Inventory inventory;
  Sword sword1("Short Sword", 10);
  Sword sword2("Long Sword", 20);
  Sword sword3("Broad Sword", 30);
  inventory.add_item(&sword1);
  inventory.add_item(&sword2);
  inventory.add_item(&sword3);
  inventory.inventory_check();
  return 0;
}
