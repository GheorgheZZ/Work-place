#ifndef PERSOANA_H
#define PERSOANA_H

#pragma once

#include <iostream>
#include <string>

class Persoana
{
std::string m_nume; // daca nu pun nimic acici e privat by default


public:
    Persoana(std::string nume);
    ~Persoana();

    void sayHallo();

    int getVarsta()
    {
         return m_varsta;
    }

protected: // este public pentru clasa insasi + derivatele ei dar din exterior sunt private (din main nu poti accesa)are de afacere cu mostenirea
    int m_varsta;


    


};

#endif