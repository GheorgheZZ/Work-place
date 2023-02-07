#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player {
private:
    string Name;
    int Health;
    int Damage;
    vector<string> Inventory;

    void CheckInventory() {
        cout << "Inventory: ";
        for (int i = 0; i < Inventory.size(); i++) {
            cout << Inventory[i] << " ";
        }
        cout << endl;
    }

    void Attack(Player &enemy) {
        enemy.Health -= Damage;
        cout << Name << " attacked " << enemy.Name << " for " << Damage << " damage." << endl;
        cout << enemy.Name << " now has " << enemy.Health << " health." << endl;
    }

protected:
    Player(string name, int health, int damage) : Name(name), Health(health), Damage(damage) {}
};

class Item {
private:
    int AttackPower;
    int MagicPower;
    int Defence;
    string ItemType;

public:
    Item(int attackPower, int magicPower, int defence, string itemType)
        : AttackPower(attackPower), MagicPower(magicPower), Defence(defence), ItemType(itemType) {}
};

class Warrior : public Player {
public:
    Warrior(string name) : Player(name, 100, 20) {}
};

class Wizard : public Player {
public:
    Wizard(string name) : Player(name, 80, 25) {}
};

class Rogue : public Player {
public:
    Rogue(string name) : Player(name, 90, 15) {}
};

int main() {
    Warrior warrior("Warrior");
    Wizard wizard("Wizard");
    Rogue rogue("Rogue");

    warrior.Attack(wizard);
    wizard.Attack(rogue);
    rogue.Attack(warrior);

    return 0;
}