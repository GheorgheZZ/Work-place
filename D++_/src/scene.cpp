#include "scene.h"

scene::scene()
{

}

scene::~scene()
{

}
void scene::PlayButon()
{
        std::system("start D:\\Work_place\\D++_\\src\\Main_Menu.wav");
        std::cout << "\033[2J\033[1;1H";//
        std::cout << "Do you want to play?" << std::endl;
        std::cout << "Enter 1 for Yes or 0 for No: ";
        int input;
        std::cin >> input;

        if (input == 1)
        {
      // PlaySound(TEXT("D:\\Work place\\D++\\src\\Main_Menu.wav"), NULL, SND_FILENAME | SND_ASYNC);
        
        std::cout << "\033[2J\033[1;1H";//
        //escape sequences ANSI pentru a curăța terminalul
        //system() poate fi periculoasă, deoarece permite executarea oricărui comandă din sistemul de operare.
        std::cout << "Enter plyer name " <<std::endl;
        std::cin >> Name;
        std::cout << "\033[2J\033[1;1H";//
        std::cout << "\n Select your class" <<std::endl;
        std::cout << "Enter 1 for (Wizard)" <<std::endl;
        std::cout << "Enter 2 for (Warrior)" <<std::endl;
        std::cout << "Enter 3 for (Rogue)" <<std::endl;
        std::cin >>Character_Class;
                if(Character_Class == 1)
                {
                std::cout << "\033[2J\033[1;1H";//
                std::cout << "You name "<<Name<<" Class "<<Wizard<< std::endl; 
                   
              
                }
                if(Character_Class == 2)
                {
                std::cout << "\033[2J\033[1;1H";//
                std::cout << "You name "<<Name<<" Class "<<Warior<< std::endl;
                }
                if(Character_Class == 3)
                {
                std::cout << "\033[2J\033[1;1H";//
                std::cout << "You name "<<Name<<" Class "<<Rogue<< std::endl;
                }
        }
        else if (input == 0)
        {
        std::cout << "You have selected No." << std::endl;
        }
        else
        {
        std::cout << "Invalid input." << std::endl;
        }
        
        std::cout<<"To continu enter any character " <<std::endl;
        int next;
        std::cin >> next;
        std::system("start D:\\Work_place\\D++_\\src\\Exploring.wav");
        std::cout<<"done";
              
                 

}