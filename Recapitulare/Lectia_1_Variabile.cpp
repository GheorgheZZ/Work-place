#include <iostream>

int main () {
    const float PI = 3.14;
    const int an_curent = 2023;

    int nume_var;

    nume_var = 10;

    std::cout <<"Valoare variabilei este " << nume_var <<std::endl;

    nume_var = 150;

    std::cout <<"Valoare variabilei modificate este " << nume_var <<std::endl;

    int var1, var2; 
    var1 = 5;
    var2 = 6;
    int sum;
    sum = var1 + var2;

    std::cout<< "Suma este "<<sum <<std::endl;

    std::cout << "Size of a char is: "<< sizeof(char) <<" Bytes"<<std::endl;
    std::cout << "Size of a wchar_t is: "<< sizeof(wchar_t) <<" Bytes"<<std::endl;
   
    std::cout << "Size of a int is: "<< sizeof(int) <<" Bytes"<<std::endl;
    std::cout << "Size of a short int is: "<< sizeof(short int) <<" Bytes"<<std::endl;
    std::cout << "Size of a long int is: "<< sizeof(long int) <<" Bytes"<<std::endl;
    std::cout << "Size of a signed long int is: "<< sizeof(signed long int) <<" Bytes"<<std::endl;
    std::cout << "Size of a int is: "<< sizeof(unsigned long int) <<" Bytes"<<std::endl;

    std::cout << "Size of a float is: "<< sizeof(float) <<" Bytes"<<std::endl;

    std::cout << "Size of a double is: "<< sizeof(double) <<" Bytes"<<std::endl;

    std::cout << "Size of a long is: "<< sizeof(long) <<" Bytes"<<std::endl;

    std::cout << "Size of a bool is: "<< sizeof(bool) <<" Bytes"<<std::endl;


    return 0;
}