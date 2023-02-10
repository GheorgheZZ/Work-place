#include "Inventory.h"

Inventory::Inventory()
{

}

Inventory::~Inventory()
{

}

void Inventory::addItem(Item item)
    {
        items.push_back(item);
    }

void Inventory::removeItem(std::string name)
 {
        for (int i = 0; i < items.size(); i++) {
            if (items[i].getName() == name) {
                items.erase(items.begin() + i);
                break;
            }
        }
   }

void Inventory::printInventory() const 
     {
        std::cout << "Inventory:" << std::endl;
        for (const Item &item : items) {
           std::cout << item.getName() << ": " << item.getQuantity() << std::endl;
       }
      }