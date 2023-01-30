#include"Teme.h"


void TPA_1()
{
     std::cout << "Hello, world!" << std::endl; 
     std::cout << "My name is Gheorghe!" << std::endl;
}
void TPA_2() // Calculeaza citi ani ai dupa anul de
{
    int an;
    const int a=2022;
    std::cout<<"In ce an va-ti nascut?"<<std::endl;
    std::cin>> an;
    std::cout<<"Aveti " << a-an;
    std::cout<<" ani"<<std::endl;
}
void TPA_3()
{
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
}
void TPA_4()
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
    }
    std::cin>> la_cit_impart;
    if(la_cit_impart>=1) 
        {   
            std::cout<<"egal cu " << numar_impartirii / la_cit_impart;
            std::cout<< " si restul "<< numar_impartirii % la_cit_impart <<std::endl;
        }
    else{
        std::cout<<"Numar POZITIV !!! >:] ";      
    }    
}
void TPA_5()
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
}
void TPA_6()
{
    std::cout<<"Introduceti parola"<<std::endl;
    std::string introdus;
    std::cin>>introdus;
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
void TPA_7()
{
    /* Esti intrun voiaj pe mare de 5 ore.
    Vasul navigeaza cu 40km pe ora.
    Scrieti un program ce va printa cati km a parcurs vasul in fiecare ora*/
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

}
void TPA_8()
{
    //Tema:O functie ce sa gasesca si sa printeze cel mai mic element dintr-un array
    int input[100], numere, i, min;     
    std::cout << "introduceti numarul de elemente din Array\n";
    std::cin >> numere;
    std::cout << "Ati introdus " << numere << " elemente \n";
    for(i = 0; i < numere; i++){
        std::cin >> input[i];
    } 
    min = input[0];
    for(i = 0; i < numere; i++){
        if(input[i] < min){
            min = input[i];
        }
    }
    std::cout  << "Cel mai mic elemente este " << min;
}
void TPA_9()
{
    int m_array[3][3]= // sintaxa pt un multi array este tip data [d1 size] [d2 size] ... [dn size]
    {     
        {1,2,10},//1 -00 2- 01 3- 02
        {4,5,6}, //4- 10 5- 11 6- 12
        {7,8,9}  //7- 20 8- 21 9- 22
    };
    int Sum = 0;
    const int coloana = 3;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(i+j == coloana-1) Sum +=m_array[i][j];
           
        }
    }
    std::cout << "Suma diagonalei secundare este " << Sum <<std::endl;
}