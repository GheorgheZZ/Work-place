#ifndef SCENE_H
#define SCENE_H
#include <string>
#include<iostream>
#include <cstdlib> // pentru exit
#include <conio.h>
#include <SFML/Audio.hpp>
#include "Game.h"
#include <random>

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

        battle_scene(); // scena Battle
        BattleScene();
    }
    
   
   
    std::string getName() {return Name;}
    int getCharacter_Class()  {return Character_Class;}


    void Take_class(int& Character_Class);// pentru a salva valoarea Character_class
  
    void Take_road(int& road);

    void Take_chest(int& chest);
    void Take_open(int& open);

    void Character_define();
    void Character_define_Item_stat();
    void Character_stat();

private:
    int heroHealth;

    int heroDamage;
    int heroDefence;

void BattleScene();
   

sf::Music music,music2; // aici cream obiectele music
void displaySwordParameters();
void displayFinal_warrior();
void display_warrior_sword();

void dissplayWandParameters();
void displayFinal_Wizard();
void display_wizard_wand();

void displayDaggerParameters();
void displayFinal_Rogue();
void display_rogue_dagger();



void PlayButon();
void crossroads();
void chest_scene();
void battle_scene();
std::string Name;
int Character_Class;
int road;
int chest;
int open;



};

#endif