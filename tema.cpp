#include <iostream>
//Creati o functie template ce sa returenze cel mai mare element intre 2 parametri
template<typename T>
void Elem_mai_mare(T& a, T& b)
{
    if (a > b)
    {
        std::cout<< a <<" este mai mare"<<std::endl;
    }
    else if (b > a)
    {
        std::cout<< b <<" este mai mare"<<std::endl;
    }
    else
    { std::cout<< a <<" si "<< b <<" sunt egale"<<std::endl;}
}

int main(){

int a = 20;
int b = 21;

Elem_mai_mare(a,b);


    return 0;
}

