#include <iostream>

int main () {
/*Scrieti un program ce accepta 2 numere ca input si assignati valorile 
lor unor variabile a si b dupa care sa se printeze o variabila suma.*/

    int a;
    int b;
    int suma;
    std::cout<<"Introduceti 2 numere"<<std::endl;
    std::cin>> a;
    std::cin>> b;
    suma = a+b;
    std::cout <<"Suma numerelor este " <<suma <<std::endl;
    
/*Esti un bucatar intr-un restaturant. Ai nevoie exact de 3 pesti 
ca sa pregatesti o ciorba de peste numita Trio
Scrieti un program ce va lua un input de numar de pesti si sa se printeze cate ciorbe trio se pot obtine.

ExInput: 14
ExOutput:4*/
    const int Treio=3;
    int nr_pesti;
    std::cout <<"Introduceti cati pesti aveti" <<std::endl;
    std::cin>>nr_pesti;
    std::cout <<"Putem prepara "<< nr_pesti/Treio <<" ciorbe"<<std::endl;

/*Vrei sa retragi  niste bani din contul tau bancar.
Programul accepta 2 numere ca input, suma din contul tau si suma pe care vrei sa o scoti.
Calculati si prinati cat ramane in contul tau dupa retragere.

Input:
450000
9000
Output:
441000*/
    float suma_cont;
    float suma_retrag;

    std::cout<<"Introduceti suma din cont" <<std::endl;
    std::cin>>suma_cont;
    std::cout<<"Introduceti suma retragerii" <<std::endl;
    std::cin>>suma_retrag;
    std::cout<<"In cont au ramas "<<suma_cont-suma_retrag <<" lei"<<std::endl;

    return 0;
}