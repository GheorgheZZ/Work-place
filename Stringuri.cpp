#include <iostream>
#include <string>
// fp;psim #include <> pentru librarii c++
// si folosim #include <> librarii custom

void printeaza_nume (std::string nume)
{
std::cout << "Salut, ma cheama "<< nume <<std::endl;
}

int suma(int a, int b)
{
    //int rezultat = a + b;
    printeaza_nume("Sergiu");
    return a+b;
}

int main() 
{
    std::cout<<"Cum te cheama\n";
    std::string nume;
    std::getline(std::cin,nume);

    std::cout << suma (10,20) << std::endl;
    printeaza_nume(nume);

    std::string Nume = "Popistas";
    std::string Prenume = "Sergiu";
    std::string nume_complet = Nume + ' ' + Prenume; //Concatenare

    std::cout << nume_complet << std::endl;
    std::cout << "Numarul de caractere in Nume este " <<Nume.size()<<std::endl;
    bool isEmpty = Nume.empty();
    std::cout << Prenume[0] << std::endl; ///////////////////////////////
    Prenume[0] = 'N';
    std::cout << Prenume <<std::endl;
    std::string input_nume_Complet;
    std::cout <<"introdu numele complet:"<<std::endl;
    //std::cin>> input_nume_Complet;
    std::getline(std::cin,input_nume_Complet);
    // std::cin.ignore(); atunci cind avem probleme cu terminalul
    std::cout <<input_nume_Complet <<std::endl;




    return 0;
}
