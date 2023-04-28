#include <iostream>
/*1.Creati un program sa va intrebe ce varsta aveti si sa va printeze pe ecran.
Ex:
Ce varsta aveti?
30
Super, ai 30 de ani*/
int main () {

    int varsta;

    std::cout << "Ce varsta aveti?" << std::endl;
    std::cin >> varsta;
    std::cout << "Super, ai " <<varsta <<" de ani";



    return 0;
}
