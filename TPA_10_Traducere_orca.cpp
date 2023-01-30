/*Ai 2 prieteni ce vorbesc orca intre ei.Limba orca sunt aceleasi cuvinte 
ca in limba romana doar ca se ia prima litera a fiecarui cuvant si se pune la sfarsitul cuvantului 
in urma caruia se adauga un ay
drum= rumday
Input:
Un string ce reprezinta o propozite in limba romana
Output:
Un string ce reprezinta traducerea in limba orca*/
#include <iostream>
#include <string>
std::string translate(std::string &cuvint_trad)
{
    int prima_litera=0; // prima litera a cuvantului
    int ultima_litera=0; // ultima litera a cuvintului
    std::string tradu;
    for(int i=0; i<cuvint_trad.size(); i++) // pentru fiecare pozitie a stringului cauta spatiului liber tradus ca int(32) 
    {
        if(cuvint_trad.at(i)==int(32)) // cind gaseste spatiul liber verifica conditia
        {
            ultima_litera=i-1; // la aceasta etapa spatiul liber e gasit si facem un pas inapoi la pozitita ultimei litere a cuvintului

           for(int y=prima_litera;y<=ultima_litera;y++) // parcurgem fiecare pozitie pina cind "y" va fi egal cu pozitia "ultima_litera"
           {
                tradu.push_back(cuvint_trad.at(y+1));
                if(y==i-2) // luam pozitia 1 a cuvintului "*i***" adica "i" pentru a inlocui utima litera corect
                {
                    tradu.push_back(cuvint_trad.at(prima_litera)); // cind ajungem  pe pozitia fix dupa primul cuvint, atribuim valoarea primei litere pe pozitia 0 adica "l"
                    tradu.push_back('a'); // pe urmatoarea pozitie se adauga "a"
                    tradu.push_back('y'); // apoi "y"
                }
           }
           prima_litera=i+1;// prima litera a urmatorului cuvant adica pozitia dupa loc liber
        }
        else if(i==cuvint_trad.length()-1) // daca nu gaseste spatiu liber merge pe urmatoarea pozitie
        {
           for(int i=prima_litera+1; i<cuvint_trad.length();i++) // "i" ia pozitia 1 a urmatorului cuvint (adica "*i***"  ) si parcurge cuvintul pina ce nu ajunge la pozitia inainte de space
           {
            tradu.push_back(cuvint_trad.at(i));
           }
           tradu.push_back(cuvint_trad.at(prima_litera)); // atribum valloare primei litere
           tradu.push_back('a');
           tradu.push_back('y');
        }
    }
    return tradu;
}
int main()
{
    std::string propozitie;
    std::cout<< "Introduceti propozitia pentru a fi tradusa in limba orca:"<<std::endl;
    std::getline(std::cin,propozitie);
    propozitie =translate(propozitie);
    std::cout <<propozitie<<std::endl;
    return 0;
}