
/*Oamenii de stiinta au nevoie de ajutor pentru a combate incalzirea globala.
In acest exerctiu trebuie sa analizati inregistrarile temperaturilor si sa o gasititi pe cea mai apropiata de 0
Reguli:
Scrieti un program ce sa printeze temperatura cea mai apropiata de 0 din datele primite. 
Daca doua numere sunt la o distanta egala spre 0.Numarul intreg pozitiv va fi considerat cel mai aproape
(de exemplu, daca temperatura este -5 si 5,afisati 5).
In caz de temp 0  se va printa 0
Input:
Linia 1: Veti primi numarul de inregistrai cu Temperatura
Linia 2: Veti primi inregistraile cu valori.
*/

#include <iostream>
#include <cmath>
#include <vector>
 
int main(){
std::cout<<"Introduceti numarul de masuratori " <<std::endl;
std::vector<int> Temperatura; // se creaza un vector cu elementul Temperatura
int Nr_masuratori,Masuratori,Apropiat_0;
std::cin>>Nr_masuratori; // cite masuratori avem nevoie
std::cout<<"Introduceti masuratorile " <<std::endl;
for(int i=0;i<Nr_masuratori;i++)  // pentru a repeta introducerea masuratorilor cite au fost introduse in (Nr_masuratori)
{
    std::cin>>Masuratori;
    Temperatura.push_back(Masuratori); // Temperatura.push_back - adauga un element la sfirsit
}
Apropiat_0=Temperatura[0]; // compar cu primul element

for(int i=0;i<Nr_masuratori;i++)
{

    if((abs(Apropiat_0)>abs(Temperatura[i]))) // daca Apropiat_0 are valoarea mi mare decit Temperatura[i] care la inceput este egal cu 0
    {                                         // atunci Apropiat_0 devine ea cea mai apropiata valoare de 0
    Apropiat_0=Temperatura[i];
    }
        else if((abs(Apropiat_0)==abs(Temperatura[i])&& abs(Apropiat_0)!=abs(Temperatura[0]))) // pentru cazuri cind avem -1 si 1 sa ia valoarea 1
            {
            Apropiat_0=abs(Temperatura[i]);
            }
                else if(abs(Apropiat_0)==abs(Temperatura[i]))
                {
                Apropiat_0=Temperatura[i]; // aici deja scoatem abs pentru a putea afisa si numerele apropiate de 0 negative
                }
                    else if (Temperatura[i]==0)
                    {
                    Apropiat_0=Temperatura[i];
                    break;
                    }
    }
std::cout<<"Cel mai apropiata masuratoare de 0 este "<<Apropiat_0<<std::endl;
return 0;
}


