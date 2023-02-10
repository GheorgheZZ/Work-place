#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <vector>
#include <string>

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