#include <iostream>
#include "zi_de_nastere.h"
#include "Persoana.h"
int main(int argc, char const *argv[])
{
Persoana p("Andrei", "Troian", 23, 1, 2023, zi_de_nastere(15, martie, 1995));
    p.calc_ani(23,ianuarie,2023,zi_de_nastere(15, martie, 1995));
    return 0;
}
