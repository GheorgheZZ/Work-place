#ifndef INVENTORY_H
#define INVENTORY_H
#include <iostream>
#include <vector>
#include <string>
#include "Item.h"
#include "Player.h"
#include "Game.h"
#pragma once

class Inventory
{
    
public:
    Inventory();
    ~Inventory();
    
void addItem(Item item);
   
void removeItem(std::string name);

void printInventory() const;

private:

std::vector<Item> items;

};

#endif