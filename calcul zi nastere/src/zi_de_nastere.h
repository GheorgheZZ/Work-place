#ifndef ZI_DE_NASTERE_H
#define ZI_DE_NASTERE_H

#pragma once
#include <string>
#include <iostream>
enum Luni 
{
    ianuarie=1,
    februarie,
    martie,
    aprilie,
    mai,
    iunie,
    iulie,
    august,
    septembrie,
    octombrie,
    noiembrie,
    decembrie
};
class zi_de_nastere
{
public:
    zi_de_nastere() {}
    
    zi_de_nastere(int zi_nastere, Luni luna_nastere, int an_nastere)
    {
    this->zi_nastere = zi_nastere;
    this->luna_nastere = luna_nastere;
    this->an_nastere =an_nastere;
    }
    zi_de_nastere(const zi_de_nastere & Zi_n)
    {
    zi_nastere = 15;
    luna_nastere = martie;
    an_nastere = 1995; 
    }

    ~zi_de_nastere();
    
    
private:
int zi_nastere;
Luni luna_nastere; 
int an_nastere;

};

#endif