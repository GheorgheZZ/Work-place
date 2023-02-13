#ifndef WARRIOR_H
#define WARRIOR_H
#include <iostream>
#include <string>
#pragma once
class Warrior 

{
public:

 Warrior() : name("Warrior"), damage(2), health(10), defence(2) {}
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