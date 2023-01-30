#include "Persoana.h"

Persoana::Persoana(std::string nume):
m_nume(nume) // member initialization
{
    std::cout<< "O persoana a fost creat\n";
}

Persoana::~Persoana()
{
    std::cout <<"O persoana a fost stearsa\n";
}

void Persoana::sayHallo()
{
    std::cout <<"Hallo my name is "<< m_nume <<std::endl;
}