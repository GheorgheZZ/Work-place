#ifndef SCENE_H
#define SCENE_H
#include <string>
#include<iostream>
#include <cstdlib>
#pragma once

class scene
{
public:
    scene();
    ~scene();
    void PlayScene()
    {
        PlayButon();
    }
    std::string getName()  {return Name;}
    int getCharacter_Class()  {return Character_Class;}
    std::string getWizard () {return Wizard;}
    std::string getWarior () {return Warior;}
    std::string getRogue () {return Rogue;}
private:
void PlayButon();
std::string Name;
int Character_Class;
std::string Wizard="Wizard";
std::string Warior="Warior";
std::string Rogue="Rogue";

};

#endif