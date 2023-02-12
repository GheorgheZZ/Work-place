#ifndef GAME_H
#define GAME_H
#include "Player.h"
#include "Warrior.h"
#include "item_sword.h"
#include "Wizard.h"
#include "item_wand.h"
#include "Rogue.h"
#include "item_dagger.h"
#include "Enemy_goblin.h"
#include "Enemy_orc.h"
#include "Enemy_troll.h"
#pragma once

class Game 
{
public:
    Game();
    ~Game();
//   WARRIOR metods    //////////
void PlayerAddWarrior();       //
void PlayerAddWarrior_sword(); //
void Final_warrior();          //
void Final_warrior_sword();    //
/////////////////////////////////

//   WIZARD metods    ///////////
void PlayerAddWizard();        //
void PlayerAddWizard_wand();   //
void Final_wizard();           //
void Final_wizard_wand();      //
/////////////////////////////////

//   ROGUE metods     ///////////
void PlayerAddRogue();         //
void PlayerAddRogue_dagger();  //
void Final_Rogue();            //
void Final_Rogue_dagger();     //
/////////////////////////////////


    int getTotalDamage() {return totalDamage;}
    int geTotaltHealth() {return totalHealth;}
    int geTotaltDefence() {return totalDefence;}
private:
int totalDamage;
int totalHealth;
int totalDefence;
Warrior warrior;
Wizard wizard;
Rogue rogue;

Player player;
item_sword sword;
item_wand wand;
item_dagger dagger;

};

#endif