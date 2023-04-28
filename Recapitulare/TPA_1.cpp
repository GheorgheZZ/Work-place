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
    std::cout << "Super, ai " <<varsta <<" de ani"<<std::endl;

/*2.Creati un program ce sa va intrebe in ce an v-ati nascut si sa printeze pe ecran ce varsta aveti.

Ex:
In ce an v-ati nascut?
1991
Super, aveti 31 de ani*/
    int an_curent=2023;
    int an_nastre;
    int ani;

    std::cout <<"In ce an v-ati nascut?" << std::endl;
    std::cin >> an_nastre;
    std::cout << "Super, aveti " << an_curent-an_nastre<<" de ani"<<std::endl;


    return 0;
}
