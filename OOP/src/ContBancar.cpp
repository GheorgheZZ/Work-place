#include "ContBancar.h"

ContBancar::ContBancar(std::string nume, int sold, int const_var)
:m_nume(nume),
m_sold(sold),
constVar(const_var)
{

    // invocati metoda gen iban
    //m_iban = iban
    std::cout <<"Un cont a fost creat\n" <<std::endl; 
}


ContBancar::ContBancar()
:m_nume("Necunoscut"),
m_sold(0),
constVar(5)
{// putem chema generatorul aici in constructor
    std::cout <<"Un cont a fost creat\n" <<std::endl; 
}

ContBancar::~ContBancar()
{
    std::cout<<"Un cont a fost sters\n" <<std::endl;
}

void ContBancar::setNume(std::string m_nume)
{
    //Tema: implementati un cec in care un m_nume sa fie doar caractere latine
    // m_nume atribut din cont bancar, m_nume este
    bool latine = false;
for (int i=0; i<m_nume.length(); i++)
        {
            if(int(m_nume[i]) >= 65 && int(m_nume[i]) <= 90 )
            {
                latine=true;
            }
                else if (int(m_nume[i]) >= 97 && int(m_nume[i]) <= 122)
                {
                    latine=true;
                }
                    else 
                    {
                        latine = false;
                    }
        }        latine ? std::cout<<m_nume << " (Caractere acceptate)\n":std::cout<<m_nume << " (Error: introduceti caractere latine)\n";
}


void ContBancar::set_sold(int sold)
{
    if(sold < 0)
    {
        std::cout <<"ERROR soldul initial trebuie sa fie mai mare de 0\n";
    }
    else
    {
        m_sold = sold;
    }
}

void ContBancar::setIBAN(std::string iban)
{
    
}

void ContBancar::generate_IBAN(std::string m_iban) // facem metoda privata
{
    srand(time(0)); // timestand al sistem de operare un micro second
    std::string prima_parte ="ROITSCHOOL";
    char valid[] ="0123456789";

    char random[5]; // generare in secventa 
    for (int i = 0; i < 15; ++i)
    {
        random[i] = valid[rand()% 10]; // 
    }
    m_iban = prima_parte + random;
    std::cout<<m_iban<<std::endl;
   
}

void ContBancar::detalii_cont()
{
    std::cout <<"Detalii cont"<<std::endl;
    std::cout <<"Numele utilizatorului este "<< getNume() <<std::endl;
    std::cout <<"Soldul lui c1 este " << getsold() <<std::endl;
    std::cout << "IBAN " << getIBAN() <<std::endl;
}

// Tema
//void ContBancar::set_check(std::string m_nume)
//{
  
//}