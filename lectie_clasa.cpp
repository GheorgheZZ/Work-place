#include <iostream>
#include <string>

void printFood(const std::string& mancare)// ar fi bine de folosit const, adresa devine nemodificabila 
{ 
    std::cout <<"Mancarea este " << mancare <<std::endl;
}


void addA(std::string & ref)
{
    ref += "A";// concatenare += la araiuri
}


int main()
{
    std::string pizza ="PIZZA";

    std::string& mancare = pizza; // interviu,,,,,,,,,,,,,, o diferenta dintre un pointer si referinta un pointer poate fi null o referinta nu(referinta e abstractizarea memoriei).
    // mincarea e o referinta alui pizza, am modificat cu ajutorul referintei continutul variabilei pizza
    printFood(mancare);

    mancare = "CARTOFI";

    printFood(pizza);

    addA(pizza);
    printFood(mancare);  //referinte diferite insa adresa e aceeasi
   
   // Creati o functie ce sa faca swap intre 2 valori
   // a= 5;
   //b = 10;

   //dupa
   //a = 10
   //b = 5
   
    return 0;
}