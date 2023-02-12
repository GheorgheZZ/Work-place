#ifndef ITEM_DAGGER_H
#define ITEM_DAGGER_H
#include <iostream>
#include <string>
#pragma once

class item_dagger
{
public:


 item_dagger() : name("Dagger"), damage(5), health(0), defence(1) {}
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