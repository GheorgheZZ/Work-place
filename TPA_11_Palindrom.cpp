/*Game of Thrones
Dothraki plănuiesc să usurpe tronul Regelui Robert. Regele Robert aude de această conspirație de la un raven și plănuiește să încuie singura ușă prin care inamicul poate să pătrundă în regat lui.
    Dar această ușă are nevoie de o cheie care este reprezentată de către anagrama unui palindrom. începe să caute în cutia lui de șiruri de caractere, verificând pe fiecare în parte dacă poate fi rearanjat într-un palindrom.
Cerință:
    Pentru un șir de caractere, să se tipărească pe ecran cuvântul DA sau NU dacă acest șir poate fi rearanjat astfel încât să fie un palindrom.
Constrangeri:
Poate fi folosite doar caractere din alfabetul latin cu litere mici
Date de intrare:
    Șirul de caractere.
Exemplu:
INPUT:
aaabbbb
OUTPUT:
DA*/
#include <iostream>
#define NO_OF_CHARS 256 //definire de preprocesare ocupam in memorie un byte

bool verificare_sir(std::string sir)
{
    int litera[NO_OF_CHARS] = { 0 }; // ne asiguram ca bytul respectiv e setat pe 0(de fapt fiecare caracter din cele 256 de combinatii)
    for (int i = 0; sir[i]; i++) 
        litera[sir[i]]++; //verifica fiecare tip de caracter si incrementam in "litera" de cite ori se repeta(in momentul cind nu mai sunt caractere de numarat trece la urmatoarea linie)

    int impar = 0; // initializez o variabila int pentru numarul de caractere impare
    for (int i = 0; i < NO_OF_CHARS; i++) {
        if (litera[i] & 1)  // aici verifica tot sirul de 256 de caractere daca sunt mai mult de 1 caracter impar
            impar++;       // de fiecare data incrementam 1 in "impar" cand avem valoare impara
 
        if (impar > 1)
            return false; // cind valoarea "impar" va fi 1 sau 0 ne returneaza true altfel va retruna false
    }

    return true;
}

int main()
{
  std::string sir;
  std::cout <<"introduceti sirul de litere pentru a verifica daca e palindrom"<< std::endl;
  std::getline(std::cin, sir);
  verificare_sir(sir) ? std::cout << "Da\n" : std::cout << "Nu\n"; //"?:" referinta la operatorul de conditionare true sau false   
    return 0;
}