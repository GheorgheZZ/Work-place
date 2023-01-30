#include "Persoana.h"
#include "zi_de_nastere.h"


Persoana::~Persoana()
{

}

void Persoana::calc_ani(int ziua_curenta, int luna_curenta, int anul_curent, zi_de_nastere Zi_N) //,int zi_nastere, int luna_nastere, int an_nastere)
{
  int zile_calculate, luni_calculate, an_calculat;
  int nr_zile_luni[] = { 31,28,31,30,31,30,31,31,30,31,30,31 }; // atribuim fiecarei luni numarul de zile
  an_calculat = anul_curent - Zi_N.an_nastere; //scadem din anul curent anul nasterii pentru a afla  anii
  if (luna_curenta < Zi_N.luna_nastere) // verificam daca avem impliniti anii calculti anterior(adicanoi putem fi in 2023 dar inca nu avem zi de nastere)
  {
    an_calculat--;                 // daca nu, scadem 1 an si verificam lunile(fara acesta verificare ar afisa anii fara de luni si zile)
    luni_calculate = 12 - (Zi_N.luna_nastere - luna_curenta);       
  }
  else
  {luni_calculate = luna_curenta - Zi_N.luna_nastere;}
  if (ziua_curenta < Zi_N.zi_nastere) // acelasi principiu ca de mai sus
  {
    luni_calculate--; 
    zile_calculate = nr_zile_luni[luna_curenta - 1] - (Zi_N.zi_nastere - ziua_curenta); 
  }
  else
  {zile_calculate = ziua_curenta - Zi_N.zi_nastere;}
  std::cout << "Ani calculati : \n";
  std::cout << an_calculat << " ani " << luni_calculate << " luni " << zile_calculate << " zile. ";
}