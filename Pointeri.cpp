#include <iostream>
// pointeri (PTR) este un aratator catre adresa,
void foo(int param) // acesst param este variabila locala pentru fiecare zona lor
{
    std::cout << param <<std::endl;
    std::cout << "Adresa lui param din foo este" << &param <<std::endl; // &param printeaza adresa lui param
}


void foo_cu_pointer(int* param) // acesst param este variabila locala pentru fiecare zona lor
{
    if(param!=nullptr)
    {
  std::cout << param <<std::endl;
 std::cout << "Adresa lui param din foo este" << &param <<std::endl; // &param printeaza adresa lui param
  
}

}


void increment (int* param)
{
    if(param != nullptr)
     ++*param;
}



int main () {
    int param =5;
    std::cout <<"Adresa lui param este " << &param <<std::endl;// adrese din memorie sunt prezentate in  hexazecimale in baza lui 16 
    foo(param);  // copiere avantaj - protejezi de modificari exterioare, pinteri se afla in C referintele nu
    int* ptr=nullptr;// un pointer ce arata catre o adresa int, un pointer null arata ctre o adresa 0
    //ptr - &param;
    //foo_cu_pointer(&ptr);
    // param = increment(param); workaraund

    increment(ptr);
    std::cout << "Valoarea lui param este " << ptr << std::endl;
    // sintaxa pointer:
    // tip_data_pointer * nume pointer
        // ++ pointer va sifta adresa
        int my_array[5] = {1,2,3,4,5};
        for (int i = 0 ; i < 5 ; i++)
        {
            std::cout <<&my_array[i] <<std::endl;
        }
// dereferrientiere - indica valoarea adresei * poate avea 3 semnificatii inmultire, pointer, odata ca dereferentiat

    return 0;
}