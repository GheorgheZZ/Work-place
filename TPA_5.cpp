#include <iostream>
/*Intrarea la piscina este libera la copii sub 7 ani.
Scrie un program ce primeste intput varsta  si printeaza daca intrarea este gratis*/
int main()
{
    int virsta;
    std::cout<<"Introduceti virsta" <<std::endl;
    std::cin>> virsta;
        if(virsta<=7)
        {
        std::cout<<"Gratis"<<std::endl;
        }
            else 
            {
            std::cout<<"Contracost"<<std::endl;
            }


/*Pentru a studia la Univeristatea ITSchool trebuie sa treci de un examen de admitere.
Nota minima este 8
Task:
Creati un program ce sa primeasca ca input nota de la examen si sa printeze ADMINS pentru
note mai mari sau egale cu 8, iar in caz contrar sa printeze RESPINS*/
int nota_exam;
    std::cout<<"Introduceti nota de la examen" <<std::endl;
    std::cin>> nota_exam;
        if(nota_exam>=8)
        {
        std::cout<<"ADMIS"<<std::endl;
        }
            else 
            {
            std::cout<<"RESPINS"<<std::endl;
            }

/*Un aparat de cafea face 5 tipuri de cafea:
1-Late
2-Americano
3-Esspreso
4-Cappuciono
5-Machiato
Screti un program ce va lua ca input numarul pentru tipul de cafea si va printa cafeaua corespunzatoare*/

    int nr_comenzii;
    std::cout<<"Introduceti numarul comenzii 1-5"<<std::endl;
    std::cin>>nr_comenzii;
        if(nr_comenzii==1) //maai bine cu else if ca asa le verifica pe fiecare la, else if mai eficient
        {
        std::cout<<"Late"<<std::endl;    
        }
            if(nr_comenzii==2)
            {
            std::cout<<"Americano"<<std::endl;    
            }
                if(nr_comenzii==3)
                {
                std::cout<<"Esspreso"<<std::endl;    
                }
                    if(nr_comenzii==4)
                    {
                    std::cout<<"Cappuciono"<<std::endl;    
                    }
                        if(nr_comenzii==5)
                        {
                        std::cout<<"Machiato"<<std::endl;    
                        }

return 0;
}