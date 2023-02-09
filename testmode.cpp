#include <iostream>
#include <string>
#include <random>

class Sword {
  public:
    std::string name;
    int damage;
    Sword(std::string name, int damage) : name(name), damage(damage) {}
};

class Shield {
  public:
    std::string name;
    int defence;
    Shield(std::string name, int defence) : name(name), defence(defence) {}
};

class Wand {
  public:
    std::string name;
    int damage;
    Wand(std::string name, int damage) : name(name), damage(damage) {}
};

class Dagger {
  public:
    std::string name;
    int damage;
    Dagger(std::string name, int damage) : name(name), damage(damage) {}
};

class Chest {
  public:
    void generate_items(std::string class_choice) {
      std::random_device rd;
      std::mt19937 gen(rd());
      std::uniform_int_distribution<> dis(1, 3);
      int item_choice = dis(gen);
      if (class_choice == "warrior") {
        if (item_choice == 1) {
          Sword sword("Steel Sword", 2);
          std::cout << "You received a " << sword.name << " with damage " << sword.damage << std::endl;
        } else if (item_choice == 2) {
          Shield shield("Wood Shield", 2);
          std::cout << "You received a " << shield.name << " with defence " << shield.defence << std::endl;
        }
      } else if (class_choice == "wizard") {
        if (item_choice == 1) {
          Wand wand("Beginner's Wand", 3);
          std::cout << "You received a " << wand.name << " with damage " << wand.damage << std::endl;
        }
      } else if (class_choice == "rogue") {
        if (item_choice == 1) {
          Dagger dagger("Steel Dagger", 3);
          std::cout << "You received a " << dagger.name << " with damage " << dagger.damage << std::endl;
        }
      }
    }
};

int main() {
  Chest chest;
  std::cout << "Enter your class: warrior, wizard, or rogue" << std::endl;
  std::string class_choice;
  std::cin >> class_choice;
  chest.generate_items(class_choice);
  return 0;
}