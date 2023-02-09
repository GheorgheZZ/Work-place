#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <vector>
#include <string>
#include "Player.h"
#include "Game.h"
#include "Inventory.h"
#pragma once

class Item
{
public:
Item(std::string name, int quantity)
        : name(name), quantity(quantity) {}

    std::string getName() const { return name; }
    int getQuantity() const { return quantity; }
    void setQuantity(int quantity) { this->quantity = quantity; }


    void addSword();
private:
    std::string name;
    int quantity;
    std::vector<Item> items;
};

#endif