#ifndef ROGUE_H
#define ROGUE_H
#include <iostream>
#include <string>
#pragma once

class Rogue
{
public:
 Rogue() : name("Rogue"), damage(5), health(10), defence(1) {}
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