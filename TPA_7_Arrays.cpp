#include <iostream>
//Tema:O functie ce sa gasesca si sa printeze cel mai mic element dintr-un array
int main(){
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
    return 0;
}