#include <iostream>

/* Esti intrun voiaj pe mare de 5 ore.
    Vasul navigeaza cu 40km pe ora.
    Scrieti un program ce va printa cati km a parcurs vasul in fiecare ora*/

    int main() {

        int const viteza_vasului=40;
        int ora_parcursa;
        for(int i= 0; i <= 4 ; i++)
        {
        ora_parcursa = 1 + i ;
        std::cout<<"Dupa "<<ora_parcursa;
        std::cout<<" ore aveti parcursi "<<ora_parcursa*viteza_vasului; // putem adauga + 1 si aici
        std::cout<<" kilometri"<<std::endl; 
        }
    /*Contdown
Creati o functie timer.Ce va lua  ca inuput un numar de secunde si va printa secundele ramase pana la 0
Trebuie printat fiecare numar inclusiv 0*/

        int secunde;
        std::cout<<"Introduceti numarul de secunde "<<std::endl;
        std::cin>> secunde;
        while (secunde>0) // si cu do putem face
        {
            secunde--;
        std::cout<<secunde<<std::endl;
        }
        
    /*Un supermarket a lansat o campanie de reduceri de 15%  reducere la 3 produse
Scrieti un program ce ia ca input  pretul total pentru fiecare produs si printeaza reducerea aferenta*/

        int reducere_1,reducere_2,reducere_3;
        std::cout<<"Introduceti pretul a 3 produse pentru a vedea reducerea" <<std::endl;
        std::cin>> reducere_1;
        std::cin>> reducere_2;
        std::cin>> reducere_3;
        std::cout<<"Reducere aplicata"<<std::endl;
        std::cout<<reducere_1-(0.15*reducere_1)<<std::endl;
        std::cout<<reducere_2-(0.15*reducere_2)<<std::endl;
        std::cout<<reducere_3-(0.15*reducere_3)<<std::endl;


        /*Ti se da un porgram ce va printa toate numerele de la 0 la 20
Schimbati codul pentru a printa doar multipli de 3

int main()
{
//schimba
int num = 0 ;
while(num <=20){
cout << num << endl;
num+=1;
}*/

int num = 0 ;
while(num <=20){
std::cout << num << std::endl;
num+=3;
}
        return 0;
    }