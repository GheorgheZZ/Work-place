#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <vector>
#include <string>
#include"scene.h"
#pragma once

class Player
{
public:
    Player(std::string name, int health, int damage):
    Name(name),
    health(health),
    damage(damage) {}

  std::string getName() {return Name;}
  int getHealth() {return health;}
  int getDamage() {return damage;}

    ~Player();
//void CheckInventory();
///virtual void Attack(Player &enemy)
//{
 // enemy.health -= damage;// va fi nevoie de redenumit health pentru enemy
 // std::cout << Name << " attacked " << enemy.Name << " for " << damage << " damage." << std::endl;
 // std::cout << enemy.Name << " now has " << enemy.health << " health." << std::endl;
   
//};
//void CheckInventory();
//std::string PlayerName;
//int health;
//int damage;
private:
//std::string Inventory;
std::string Name;
int health;
int damage;

};

#endif