#ifndef CONTBANCAR_H //(#ifndef)-directive de preprocesare hadig goard, nu ne lasa sa avem inca o librarie cu acelasi nume
#define CONTBANCAR_H // 

#pragma once // directiva de preprocesare (pentru windows) nu are impact la memore ci la timp de compilare
#include<iostream>
#include<string>
#include<time.h>

class ContBancar
{
public: // acces specifiers
    ContBancar(std::string nume, int sold, int val_const); // constructor se instanteaza un obiect in memorie (ambele trebuie sa fie publice)
    ContBancar(); // constructor
    ~ContBancar(); // destructor se sterge din memorie acest obiect
    // nu pot avea mai multi destructori (doar elibereaza memoria)


    void setNume(std::string nume); 
    std::string getNume() // de multe ori e acceptat sa fie facut in hedere la ceva de genul get
    {
        return m_nume;
    }

    void set_sold(int sold);
    int getsold()
    {
        return m_sold;
    }

    void setIBAN(std::string iban);
    std::string getIBAN()
    {
        return m_iban;
    }
    void generate_IBAN(std::string m_iban);


    void detalii_cont();
 
private: // alt + sageata dreapta (alt tab pentru C++)
    std::string m_nume; 
    int m_sold;
    std::string m_iban;
    const int constVar;

};

#endif