#include "ContBancar.h"

ContBancar::ContBancar()
{

}

ContBancar::~ContBancar()
{
generate_IBAN(m_iban);
}

void ContBancar::generate_IBAN(std::string m_iban)
{
    srand(time(0)); // timestand al sistem de operare un micro second
    std::string prima_parte ="ROITSCHOOL";
    char valid[] ="0123456789"; // char valid[] e pus pentru un range de numere de la 0 la 9

    char random[5]; // generare in secventa 
    for (int i = 0; i < 15; ++i)
    {
        random[i] = valid[rand()% 10];
    }
    m_iban = prima_parte + random;
    std::cout<<m_iban<<std::endl;
   
}
