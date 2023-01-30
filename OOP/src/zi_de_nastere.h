#ifndef ZI_DE_NASTERE_H
#define ZI_DE_NASTERE_H

#pragma once
#include <string>
#include <iostream>
class zi_de_nastere
{
public:
    zi_de_nastere(int an, std::string luna, int zi);
    ~zi_de_nastere();
    
    void setAn(int an); 
    int getAn() 
    {
        return m_an;
    }

    void setZi(int zi); 
    int getZi() 
    {
        return m_zi;
    }

    void setLuna(std::string luna); 
    std::string getLuna()
    {
        return m_luna;
    }


    
private:
int m_an;
int m_zi;
std::string m_luna;

};

#endif