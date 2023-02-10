#include "Game.h"

Game::Game()
{

}

Game::~Game()
{

}
void CreateChestItems(Player* p) {
  switch (p->type) {
    case warrior:
      {
      Inventory war;
      war.addItem(Item("Sword",1));
      war.printInventory();
    
      }
      break;
    case wizard:
      // create items 
      break;
    case rogue:
      // create items 
      break;
  }
}




