#ifndef ITEM_SWORD_H
#define ITEM_SWORD_H
#include <iostream>
#include <string>
#pragma once

class item_sword
{
public:
    

 item_sword() : name("Sword"), damage(4), health(0), defence(2) {}
    std::string getName() {return name;}
    int getDamage() {return damage;}
    int getHealth() {return health;}
    int getDefence() {return defence;}

private:

    std::string name;
    int damage;
    int health;
    int defence;
};

#endif