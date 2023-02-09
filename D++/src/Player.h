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
enum PlayerType
{
  warrior,
  wizard,
  rogue
};
  PlayerType type;
    Player(std::string name, int health, int damage, int defence):
    Name(name),
    health(health),
    damage(damage),
    defence(defence)
    {}

  std::string getName() {return Name;}
  int getHealth() {return health;}
  int getDamage() {return damage;}
  int getdefence() {return defence;}
    ~Player();

private:

std::string Name;
int health;
int damage;
int defence;

};

#endif