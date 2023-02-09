#ifndef WARRIOR_H
#define WARRIOR_H
#include "Player.h"
#pragma once

class Warrior : public Player 

{
public:
Warrior(std::string name, int health, int damage, int defence) :
    Player(name, health, damage, defence) //preiau parametri la player
    {
        type = warrior;
    }
    
    ~Warrior();

private:

};

#endif