#include <iostream>
/*O functie ce verifica daca o parola respecta cerintele:
Sa aibe cel putin un numar, sa aibe cel putin un caracter special, sa aibe o litera mare si sa fie de cel putin dimensiune 12*/


void Verificare_parola(std::string introdus) {
   int caracter = introdus.length();     //.length numara caracterele din "introdus"
   
   bool litera_mare = false;
   bool cifre = false, caracter_special = false;
   std::string caracter_normal = "abcdefghijklmnopqrstuvwxyz""ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 ";
   for (int i = 0; i < caracter; i++)  // i-ul este declarat direct in for, are 3 parametri, i=0 se executa o data si declara iteratia(reluare),
                                         // i<caracter se evalueaza expresia si converteste rezultat in bool, daca este true - se executa instructiunea
                                         // - se evalueaza expresia - revine la pasul 2, daca false se trece la instructiunea de dupa for.
   {
      if (isupper(introdus[i])) // isupper([]) Verifica daca un caracter este litera mare.
                                // Returneaza o valoare diferita de zero daca parametrul este litera mare, 0 in caz contrar.
      {
         litera_mare = true;
      }
      if (isdigit(introdus[i])) // Verifica dacă un caracter este cifra. 
                                // Returnează o valoare diferita de zero daca parametrul este cifra, 0 in caz contrar.
      {
         cifre = true;
      }
      std::size_t special = introdus.find_first_not_of(caracter_normal); // size_t -(un integer nesemnat, poate stoca dimensiunea maximă a unui 
                                                                         // obiect teoretic posibil de orice tip), .find_first_not_of - verifica
                                                                         // daca in parola "introdus" exista un caracter 
                                                                         // care NU este in lista "caracter_normal" 
      if (special != std::string::npos)
      {
         caracter_special = true;
      }
   }

      std::cout << "Parola -";
   if (litera_mare && cifre && caracter_special && (caracter >= 12))
      std::cout << "Acceptata" << std::endl;
   else
      std::cout << "trebuie sa contina cel putin 12 caractere, o cifra, o litera mare si un caracter special" << std::endl;
}
int main() {
   std::cout<<"Introduceti parola"<<std::endl;
   std::string introdus;
   std::cin>>introdus;
   Verificare_parola(introdus);
   return 0;
}