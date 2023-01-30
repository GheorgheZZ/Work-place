#include <iostream>

class Joc {
public:
    Joc() 
    {
        std::cout << "Start Joc\n";
    }

    ~Joc() 
    {
        std::cout << "Stop Joc\n";
    }
};

class Spanzuratoarea : public Joc 
{
public:
    Spanzuratoarea() 
    {
        std::cout << "Pornire Spanzuratoarea\n";
    }

    ~Spanzuratoarea() 
    {
        std::cout << "Oprire Spanzuratoarea\n";
    }
};

int main() {
    Spanzuratoarea s;
    return 0;
}