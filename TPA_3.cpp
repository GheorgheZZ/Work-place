#include <iostream>
int main() {
    /*Scrieti un program ce accepta 2 numere ca input si assignati valorile lor unor variabile a si b
     dupa care sa se printeze o variabila suma.*/
    float a,b;  
    std::cout<<"Introduceti 2 numere separate prin tasta enter "<<std::endl;
    std::cin>>a;
    std::cin>>b;
    std::cout <<"Suma este " << a+b<<std::endl;
    

    /*Esti un bucatar intr-un restaturant. Ai nevoie exact de 3 pesti 
    ca sa pregatesti o ciorba de peste numita Trio
    Scrieti un program ce va lua un input de numar de pesti si sa se printeze cate ciorbe trio se pot obtine*/
    int Trio;
    std::cout<<"Introduceti numarul de pesti ";
    std::cin>>Trio;  //aici nu prea inteleg de ce dupa introducerea numarului se trece pe linie noua
    std::cout<<"Se pot obtine "<<Trio/3;
    std::cout<<" ciorbe Trio ";
    std::cout<<"si va ramine "<<Trio%3; //am adaugat si linia in caz daca ramine rest de peste
    std::cout<<" pesti"<<std::endl;

    /*Vrei sa retragi  niste bani din contul tau bancar.
    Programul accepta 2 numere ca input, suma din contul tau si suma pe care vrei sa o scoti.
    Calculati si prinati cat ramane in contul tau dupa retragere.*/
    float suma_din_cont, suma_care_o_scoti;
    std::cout<<"introduceti suma contului dumneavoastra ";
    std::cin>>suma_din_cont;  
    std::cout<<"Introduceti suma retragerii ";
    std::cin>>suma_care_o_scoti;
    /* Mai jos am introdu sintaxe care inca nu am trecut dar care ar imbunatati programul
    if(suma_care_o_scoti > suma_din_cont){
    std::cout<<"Eroare, Suma introdusa este mai mare decit suma din cont";
    }else {*/
    std::cout<<"Suma ramasa in cont "<<suma_din_cont-suma_care_o_scoti;//}
    

    return 0;
}