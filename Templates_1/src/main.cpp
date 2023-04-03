#include <iostream>
//swich intre 2 inturi
// void swap(int& a, int& b) ctrl K C  unc ctrl K U
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
// void swap(char& a, char& b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
template<typename T>
void swap(T& a, T& b)
{
    T temp = a;
    a=b;
    b= temp;   
}





int main(int argc, char const *argv[])
{

    int c = 10;
    int d= 99;
    char e = 'c';
    char f = 'z';

    std::string g ="Test";
    std::string h = "Tralala";
    std::cout <<"inainte de swap\n";
    std::cout <<g<<std::endl;
    std::cout <<h <<std::endl;
    std::cout <<c <<std::endl;
    std::cout <<d <<std::endl;
    std::cout <<e <<std::endl;
    std::cout <<f <<std::endl;


    swap(e,f);
    swap(c,d);
    swap (g,h);
    std::cout <<"Dupa swap\n";
   std::cout <<g<<std::endl;
    std::cout <<h <<std::endl;
    std::cout <<c <<std::endl;
    std::cout <<d <<std::endl;
    std::cout <<e <<std::endl;
    std::cout <<f <<std::endl;
    return 0;
}
