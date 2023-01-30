#include <iostream>

bool checkLimit(int limit)
{
    const int max_limit = 20;
    if(limit > max_limit)
    {
        return false; // daca ajunge codul in primul return nu va face mai departe indiferent de alt return
    }

    return true; 
}



int main() {

    int value = 25;
    bool isValid = true;
    
    if(isValid) // same as isValid == true
    {
        std::cout << "Acces granted\n";
        if(checkLimit(value))
            std::cout << "You are INNN\n";
    }
    else {   
        std::cout << "Acces not granted\n";
        std::cout << "Value above max limit\n";
    }
    std::cout <<"Finishing\n";

    int time = 9;
    if(time < 10)
    {
        std::cout << "Good Morning\n";
    }

    else if (time <= 20)
    {
        std::cout << "Good day\n";
    }
    else
    {
        std::cout << "Good Evning\n";
    }

    std::cout << "Introduceti operatiunea\n";
    std::cout << "+ Adunarea, - Scaderea\n";
    char op;
    std::cin >> op;
    std::cout << "Introduceti valor\n";
    int a,b;
    std::cin >> a;
    std::cin >> b;
    
    switch(op)
    {
    case '+':
        std::cout <<"suma este: " <<a+b <<std::endl;
        break;
        case '-':
        std::cout << "Scaderea este: " << a-b <<std::endl;
        break;
    case '*' :
        std::cout << "inmultirea este: " << a*b <<std::endl;
        break;
    default:
        std::cout << "Operatiunea "<< op <<" nu este suportata";
        break;
    }

    return 0;
}