#include "Game.h"

Game::Game()
{

}
Game::~Game()
{   }
//                                              WARIOR                                                                                   
////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                                                                      //
void Game::PlayerAddWarrior() //              Player +  Warrior stats                                 //
{                                                                                                     //
    Warrior* WarrPointer = &warrior;                                                                  //
    Player* PlayerPoint = &player;                                                                    //                                                                                
   totalHealth = WarrPointer->getHealth() + PlayerPoint->getHealth();                                 //
   totalDamage = WarrPointer->getDamage() + PlayerPoint->getDamage();                                 //
   totalDefence = WarrPointer->getDefence() + PlayerPoint->getDefence();                              //
}                                                                                                     //
                                                                                                      //
void Game::PlayerAddWarrior_sword() //        Player  + Warrior + Sword stats                         //
{                                                                                                     //
    Warrior* WarrPointer = &warrior;                                                                  //
    Player* PlayerPoint = &player;                                                                    //
   item_sword* SwordPoint = &sword;                                                                   //  
   totalHealth = WarrPointer->getHealth() + PlayerPoint->getHealth();                                 //   
   totalDamage = WarrPointer->getDamage() + PlayerPoint->getDamage()+SwordPoint->getDamage();         //
   totalDefence = WarrPointer->getDefence() + PlayerPoint->getDefence()+SwordPoint->getDefence();     //
}                                                                                                     //
                                                                                                      //
void Game::Final_warrior()//                 save parametri                                           //
 //  am avut nevoie sa salvez parametri din void totalHealth si restu parametrilor                    //
{                                                                                                     //
      Game game;                                                                                      //
      game.PlayerAddWarrior();                                                                        //
      std::cout <<"  Warrior stats"<<std::endl;                                                       //
std::cout << "Total Health: " << game.geTotaltHealth() << std::endl;                                  //
std::cout << "Total Damage: " << game.getTotalDamage() << std::endl;                                  //
std::cout << "Total Defence: " << game.geTotaltDefence() << std::endl;                                //
}                                                                                                     //
                                                                                                      //
void Game::Final_warrior_sword()//            save paarametri                                         //
{                                                                                                     //
      Game game;                                                                                      //
      game.PlayerAddWarrior_sword();                                                                  //
      std::cout <<"  Warrior stats"<<std::endl;                                                       //
std::cout << "Total Health: " << game.geTotaltHealth() << std::endl;                                  //
std::cout << "Total Damage: " << game.getTotalDamage() << std::endl;                                  //
std::cout << "Total Defence: " << game.geTotaltDefence() << std::endl;                                //
}                                                                                                     //
////////////////////////////////////////////////////////////////////////////////////////////////////////
void Game::PlayerAddWizard()
{
Wizard* WizzPointer = &wizard;                                                                  //
    Player* PlayerPoint = &player;                                                                    //                                                                                
   totalHealth = WizzPointer->getHealth() + PlayerPoint->getHealth();                                 //
   totalDamage = WizzPointer->getDamage() + PlayerPoint->getDamage();                                 //
   totalDefence = WizzPointer->getDefence() + PlayerPoint->getDefence();         
}
void Game::PlayerAddWizard_wand()
{
    Wizard* WizzPointer = &wizard;                                                                  //
    Player* PlayerPoint = &player;                                                                    //
   item_wand* WandPoint = &wand;                                                                   //  
   totalHealth = WizzPointer->getHealth() + PlayerPoint->getHealth()+WandPoint->getHealth();                                 //   
   totalDamage = WizzPointer->getDamage() + PlayerPoint->getDamage()+WandPoint->getDamage();         //
   totalDefence = WizzPointer->getDefence() + PlayerPoint->getDefence();       
}
void Game::Final_wizard()
{
      Game game;                                                                                      //
      game.PlayerAddWizard();                                                                        //
      std::cout <<"  Wizard stats"<<std::endl;                                                       //
std::cout << "Total Health: " << game.geTotaltHealth() << std::endl;                                  //
std::cout << "Total Damage: " << game.getTotalDamage() << std::endl;                                  //
std::cout << "Total Defence: " << game.geTotaltDefence() << std::endl;      
}
void Game::Final_wizard_wand()
{
      Game game;                                                                                      //
      game.PlayerAddWizard_wand();                                                                  //
      std::cout <<"  Wizzard stats"<<std::endl;                                                       //
std::cout << "Total Health: " << game.geTotaltHealth() << std::endl;                                  //
std::cout << "Total Damage: " << game.getTotalDamage() << std::endl;                                  //
std::cout << "Total Defence: " << game.geTotaltDefence() << std::endl;       
}




void Game::PlayerAddRogue()
{
Rogue* RoguePointer = &rogue;                                                                  //
    Player* PlayerPoint = &player;                                                                    //                                                                                
   totalHealth = RoguePointer->getHealth() + PlayerPoint->getHealth();                                 //
   totalDamage = RoguePointer->getDamage() + PlayerPoint->getDamage();                                 //
   totalDefence = RoguePointer->getDefence() + PlayerPoint->getDefence();      
}

void Game::PlayerAddRogue_dagger()
{
 Rogue* RoguePointer = &rogue;                                                                  //
    Player* PlayerPoint = &player;                                                                    //
   item_dagger* DaggerPoint = &dagger;                                                                   //  
   totalHealth = RoguePointer->getHealth() + PlayerPoint->getHealth();                                 //   
   totalDamage = RoguePointer->getDamage() + PlayerPoint->getDamage()+DaggerPoint->getDamage();         //
   totalDefence = RoguePointer->getDefence() + PlayerPoint->getDefence()+DaggerPoint->getDefence();        
}

void Game::Final_Rogue()
{
      Game game;                                                                                      //
      game.PlayerAddRogue();                                                                       //
      std::cout <<"  Rogue stats"<<std::endl;                                                       //
std::cout << "Total Health: " << game.geTotaltHealth() << std::endl;                                  //
std::cout << "Total Damage: " << game.getTotalDamage() << std::endl;                                  //
std::cout << "Total Defence: " << game.geTotaltDefence() << std::endl;       
}

void Game::Final_Rogue_dagger()
{
      Game game;                                                                                      //
      game.PlayerAddRogue_dagger();                                                                  //
      std::cout <<"  Wizzard stats"<<std::endl;                                                       //
std::cout << "Total Health: " << game.geTotaltHealth() << std::endl;                                  //
std::cout << "Total Damage: " << game.getTotalDamage() << std::endl;                                  //
std::cout << "Total Defence: " << game.geTotaltDefence() << std::endl;       
}





