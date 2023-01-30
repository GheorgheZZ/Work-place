#include <iostream>
#include <string>
const float pi = 3.14;

void foo()
{  
     std::cout <<"Pi este "<< pi <<std::endl;
}


bool CheckPassword(std::string input)
{
    if (input == "Parola")
    {
        return true;}
    

      else return false;
     
    
}



int main() {
    foo();
   std::cout <<"Din Maine Pi este "<< pi <<std::endl;


    /*std::cout << "suma este " << 1 + 0 << std::endl;
    std::cout << "suma este " << 1 + 1 << std::endl; 
    std::cout << "suma este " << 1 + 2 << std::endl;*/ 

    
    int last_sum = 0;
    int last_index = 0;
    bool b = true;
    for(int i= 0; i < 10 ; i++)
    {
        last_sum = 1 + i;
        std::cout<<"Suma dintre 1 + "<< i <<" este " << last_sum << std::endl;
        bool b= true;
        if(!b)
        {
            std::cout<<"bay bay"<<std::endl;
            break;
        }
    }
    std::cout << "Last index is "<< last_index <<std::endl;
    
    for(int i = 0; i < 5; i++) // declaram o variabila i ce incepe de la 0, 2 - se verifica conditia daca da ne printeaza, dupa care revine si incrementeaza
                                //si tot asa
    

    {
        std::cout <<"Buna LUMEE!\n";
    }
    int a=0;
    while (a <5)
    {
        std::cout<< "Val lui a este "<< a <<std::endl;
        a++;
    }
    bool is_valid = true;
    while (is_valid)
    {
        std::cout<<"you are in\n";
        break;
    }

 std::string parola;

    do
    {
        std::cout <<"introduceti parola\n";
        std::cin>> parola;
    } while (!CheckPassword(parola));


    
    return 0;
}