#ifndef SCENE_H
#define SCENE_H
#include <string>
#include<iostream>
#include <cstdlib> // pentru exit
#include <conio.h>
#include <SFML/Audio.hpp>
#include "Game.h"
#include <random>
#include "Draws.h"
#include <conio.h>
#pragma once

class scene
{
public:
      
    ~scene();
    void PlayScene()
    {  
        
        PlayButon(); // prima scena

        crossroads();  // scena crossroads

        chest_scene(); // scena chest

                         
        BattleScene();// scena Battle 
    }
    
   
   
  //  std::string getName() {return Name;}
  //  int getCharacter_Class()  {return Character_Class;}


    

private:


    void Take_class(int& Character_Class);// pentru a salva valoarea Character_class 
    void Take_road(int& road);   // salvam alegerea drum ales
    void Take_chest(int& chest); // salvam alegerea chest
    void Take_open(int& open);   // salvam daca a fost ridicat sau nu itemul


    void Character_define();   // afiseaza staturile jucatorului
    void Character_define_Item_stat();
    void Character_stat();

    int heroHealth;  // salveaza staturile din if-uri
    int heroDamage;
    int heroDefence;


   

sf::Music music; // obiectul music

// Parametri Claselor(Damage,Health,Defence)
void displaySwordParameters();// parametri itemului sword
void displayFinal_warrior(); // parametri warrior
void display_warrior_sword();// parametri warrior + sword acelasi lucru pentru celelalte clase

void dissplayWandParameters();
void displayFinal_Wizard();
void display_wizard_wand();

void displayDaggerParameters();
void displayFinal_Rogue();
void display_rogue_dagger();



void PlayButon();
void crossroads();
void chest_scene();
void BattleScene();

std::string Name;
int Character_Class;
int road;
int chest;
int open;
Game game;
Draws pik;
item_sword sword;
item_wand wand;
item_dagger dagger;
};

#endif