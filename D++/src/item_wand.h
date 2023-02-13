#ifndef ITEM_WAND_H
#define ITEM_WAND_H
#include <iostream>
#include <string>
#pragma once

class item_wand
{
public:
    

 item_wand() : name("wand"), damage(12), health(5), defence(0) {}
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