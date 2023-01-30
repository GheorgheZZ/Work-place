#include <iostream>
#include <vector>
#include <string>
#include "Teme.h"


int main(int argc, char const *argv[])
{
    int tema;
    std::cout <<"Alegeti tema de la 1 la 12 "<<std::endl;
    std::cin >> tema;
    if(tema==1){
    TPA_1();}
    if(tema==2){
    TPA_2();}
    if(tema==3){
    TPA_3();}
    if(tema==4){
    TPA_4();}
    if(tema==5){
    TPA_5();}
    if(tema==6){
    TPA_6();}
    if(tema==7){
    TPA_7();}
    if(tema==8){
    TPA_8();}
    if(tema==9){
    TPA_9();}
    return 0;
}
