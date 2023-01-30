#include <iostream>
#include <vector>
#include <string>

int main(){
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
    return 0;
}