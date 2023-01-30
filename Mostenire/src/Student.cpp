#include "Student.h"

Student::Student(int varsta,std::string nume):
Persoana(nume) // initialization list
{
    std::cout <<"Un student a fost creat\n";
    m_varsta = varsta;
}

Student::~Student()
{
    std::cout << "Un student a fost sters\n";
}