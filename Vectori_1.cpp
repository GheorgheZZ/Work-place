#include <iostream>
#include <vector>
#include <string>

void printUsers(std::vector<std::string> users)
{
    for(int i=0; i <users.size(); i++)
    {
        std::cout << users[i] <<std::endl;
    }
}

int main() {

std::vector<int> lista;
lista.push_back(10);
std::cout <<"Dimensiunea listei mele este " <<lista.size() <<std::endl;
lista.push_back(10);
std::cout <<"Dimensiunea listei mele este " <<lista.size() <<std::endl;

std::vector<std::string> utilizatori;
utilizatori.push_back("Sergiu");
utilizatori.push_back("Andrei");
//printUsers(utilizatori);
utilizatori.push_back("Stefan");
//printUsers(utilizatori);
utilizatori.pop_back();
printUsers(utilizatori);





    return 0;
}