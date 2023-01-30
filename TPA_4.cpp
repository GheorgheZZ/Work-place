#include <iostream>

//O functie ce face conversia de la minute la secunde 
int main()
{
//O functie ce face conversia de la minute la secunde 
std::cout << "Introduceti minute pentru conversie" << std::endl;
int introdu_minute;
std::cin >> introdu_minute;
std::cout << (introdu_minute * 60)<<" Secunde"<<std::endl;



// O functie ce sa returneze restul impartirii a 2 numer
int numar_impartirii, la_cit_impart;
std::cout<<"Introduceti numarul care doriti sa impartiti" <<std::endl;
std::cin>> numar_impartirii;
if(numar_impartirii>=0) {
std::cout<<"Introduceti numarul la cit impartiti" <<std::endl;}
else{
    std::cout<<"introduceti numar pozitiv !!! >:] ";
    return 0 ;
}
std::cin>> la_cit_impart;
if(la_cit_impart>=1) 
    {
   
        std::cout<<"egal cu " << numar_impartirii / la_cit_impart;
        std::cout<< " si restul "<< numar_impartirii % la_cit_impart <<std::endl;
    }

else{
    std::cout<<"Numar POZITIV !!! >:] ";
    return 0;
}
return 0;
}