#include "Game.h"

Game::Game()
{

}

Game::~Game()
{

}
void CreateChestItems(Player* p) {
  switch (p->type) {
    case Player::warrior:
      {
      //Inventory war;
      //war.addItem(Item("Sword",1));
      //war.printInventory();
    
      }
      break;
    case Player::wizard:
      // create items 
      break;
    case Player::rogue:
      // create items 
      break;
  }
}




