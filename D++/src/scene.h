#ifndef SCENE_H
#define SCENE_H
#include <string>
#include<iostream>
#include "Player.h"
#include <cstdlib> // pentru exit
#include <conio.h>
#include <SFML/Audio.hpp>

#pragma once

class scene
{
public:

    scene();
    ~scene();
    void PlayScene()
    {
        PlayButon(); // prima scena

        crossroads();  // scena 2

        chest_scene(); // scena chest
    }
    
   
    std::string getName() {return Name;}
    int getCharacter_Class()  {return Character_Class;}
    std::string getWizard () {return Wizard;}
    std::string getWarior () {return Warior;}
    std::string getRogue () {return Rogue;}

    void Take_class(int& Character_Class);// pentru a salva valoarea Character_class
  
    void Take_road(int& road);

    void Take_chest(int& chest);

    void Character_define();
    
private:
sf::Music music,music2; // aici cream obiectele music

void PlayButon();
void crossroads();
void chest_scene();

std::string Name;
int Character_Class;
int road;
int chest;
std::string Wizard="Wizard";
std::string Warior="Warior";
std::string Rogue="Rogue";
};

#endif