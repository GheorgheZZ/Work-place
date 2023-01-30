#include <iostream>
#include <vector>
#include <string>



void printUsers(std::vector<std::string> users)
{   
    for (int i=0; i<users.size(); i++)
    {
        std::cout <<users.at(i) <<std::endl; // .at(i) daca ajungcu index inafara arayului nostru ori vectorului nostru
    }
}


int main ()
{

    /// sintaxa pt vector : std::vector<tipData> nume_vector;
    std::vector<int> lista;
    lista.push_back(10);
    std::cout <<"Dimnsiunea listei mle este " << lista.size()<< std::endl;
    lista.push_back(10);
    std::cout <<"Capacitate listei mle este " << lista.capacity()<< std::endl;
    std::vector<std::string> utilizatori;
    utilizatori.push_back("Sergiu");
    utilizatori.push_back("Andrei");
    //lista.shrink_to_fit() pentru optimizari
   // printUsers(utilizatori);
    utilizatori.push_back("Stefan");
    //printUsers(utilizatori);

    utilizatori.pop_back(); // stergem ultimul entry din vectorul nostru
    printUsers(utilizatori);
    std::string Nume ="Sergiu";
    Nume ="Tralaala";
    for (int i=0; i<Nume.size();i++)
    {
        std::cout <<Nume.at(i)<< std::endl;
    }

    int m_array[3][3]= // sintaxa pt un multi array este tip data [d1 size] [d2 size] ... [dn size]
    {
       
        {1,2,3},//1 -00 2- 01 3- 02
        {4,5,6},//4- 10
        {7,8,9} //7- 20
    };
    std::cout <<m_array[0][0]; // adresa din matrice
    // vrem sa calculam suma pe diagonala principala
    int diagSum = 0;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(i==j)
            {
                diagSum += m_array[i][j];
            }
        }
    }
    diagSum = 0;
    for(int i=0; i<3; i++)
    {
        diagSum += m_array[i][i];
    }

    std::cout << "Suma diagonalei principale este " << diagSum <<std::endl;
    int x[2][3] =
    {
        {2,3},
        {8,9,10}
    };





    return 0;
}