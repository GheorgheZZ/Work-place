#ifndef BICICLETA_H
#define BICICLETA_H

#pragma once
#include <iostream>
#include <string>
class Bicicleta
{
public:
    Bicicleta();
    ~Bicicleta();

    void met_de_accelerare(std::string accelerare); // metode 
    void met_de_franare(std::string frina);
private:
    std::string tip_cadru; // atribute
    std::string dimensiune_roti;
    std::string numar_de_viteze;

};

#endif