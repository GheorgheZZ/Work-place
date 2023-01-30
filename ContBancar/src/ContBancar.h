#ifndef CONTBANCAR_H
#define CONTBANCAR_H

#pragma once
#include<iostream>
#include<string>
#include<time.h>
class ContBancar
{
public:
    ContBancar();
    ~ContBancar();
    std::string getIBAN()
    {
        return m_iban;
    }
private:
void generate_IBAN(std::string m_iban); // metoda privata
std::string m_iban;
};

#endif