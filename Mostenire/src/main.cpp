#include "Student.h"



int main(int argc, char const *argv[])
{// main e entry point poate avea si alt nume
    Student* s = new Student(19,"Sergiu");
    s->sayHallo(); // ->dereferentiere- cind avem un pointer pe obiect pe heap memory, dar dacaa vreau sa accesez trebuie sa dereferentiez acesta asta face
    std::cout <<"Virsta este "<< s-> getVarsta() << std::endl;
    Persoana p("TEST");
   // p.m_varsta;

    delete s;
    return 0;
}
