#ifndef PERSOANA_H
#define PERSOANA_H

#pragma once
#include <iostream>
#include <string>
#include "zi_de_nastere.h"

class Persoana
{
public:

    Persoana(std::string nume, std::string prenume, int ziC, int lunaC, int AnC, zi_de_nastere Zi_N):
    m_Zi_N(Zi_N),
    m_nume(nume),
    m_prenume(prenume),
    ziua_curenta(ziC),
    luna_curenta(lunaC),
    anul_curent(AnC)
    {
      
        nume = "Andrei";
        prenume = "Troian";
        ziC = 23;
        lunaC = 1;
        AnC = 2023;
    }
    void calc_ani(int ziua_curenta, int luna_curenta, int anul_curent, zi_de_nastere Zi_N);
    
    ~Persoana();

    
    


private:

std::string m_nume;
std::string m_prenume;
int ziua_curenta;
int luna_curenta;
int anul_curent;
zi_de_nastere m_Zi_N;
};

#endif