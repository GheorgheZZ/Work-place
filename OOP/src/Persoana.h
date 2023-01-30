#ifndef PERSOANA_H
#define PERSOANA_H

#pragma once
#include <iostream>
#include <string>
class Persoana
{
public:
    Persoana(std::string nume,std::string prenume,int ziNastere, int ziNastere_an, std::string ziNastere_luna,int ziNastere_zi);
    ~Persoana();

void set_nume(std::string nume);
    std::string getnume()
    {
        return m_nume;
    }

    void set_prenume(std::string prenume);
    std::string get_prenume()
    {
        return m_prenume;
    }
    void set_zi(int ziNastere);
    int get_zi()
    {
        return zi_nastere;
    }

    void calc_ani();

private:
std::string m_nume;
std::string m_prenume;
int zi_nastere;
int ziNastere_an; 
std::string ziNastere_luna;
int ziNastere_zi;
};

#endif