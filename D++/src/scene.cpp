#include "scene.h"
//sf::Music music;

scene::scene()
{

}

scene::~scene()
{

}
void scene::PlayButon()
{
 
  music.openFromFile("Main_Menu.wav");
  music.play();
  music.setLoop(true);
           
  std::cout << "\033[2J\033[1;1H";//escape sequences ANSI pentru a curăța terminalul
  //"\033" este codul de scăpare pentru caractere ANSI
  //"2J" reprezintă comanda pentru a șterge conținutul ecranului
  //"1;1H" reprezintă comanda pentru a muta cursorul în poziția 1,1 (în partea de sus a stânga a ecranului).
  std::cout<<" Once upon a time, there was a small kingdom surrounded by dark forests and towering mountains."<<std::endl; 
  std::cout<<"The people lived in fear of the monsters that lurked in the shadows, terrorizing the countryside."<<std::endl; 
  std::cout<<"The king had offered a reward to anyone who could defeat the creatures and bring peace to the kingdom."<<std::endl;
  while(true) 
  {  
    std::cout << "Do you want to play?" << std::endl;
    std::cout << "Enter 1 for Yes or 2 for No: ";
    int input;
    std::cin >> input;

    if (input == 1)
    {

      std::cout << "\033[2J\033[1;1H";//
      std::cout << "Enter plyer name " <<std::endl;
      std::cin >> Name;
      std::cout << "\033[2J\033[1;1H";//
      while(true) 
      {
        
        std::cout << "\n Select your class" <<std::endl;
        std::cout << "Enter 1 for (Wizard)" <<std::endl;
        std::cout << "Enter 2 for (Warrior)" <<std::endl;
        std::cout << "Enter 3 for (Rogue)" <<std::endl;
        Take_class(Character_Class);
    
        if(Character_Class == 1)
        {
        std::cout << "\033[2J\033[1;1H";//
        std::cout << "You name "<<Name<<" Class "<<Wizard<< std::endl; 
        break;
        }

        else if(Character_Class == 2)
        {
        std::cout << "\033[2J\033[1;1H";//
        std::cout << "You name "<<Name<<" Class "<<Warior<< std::endl;
        break;
        }

        else if(Character_Class == 3)
        {
        std::cout << "\033[2J\033[1;1H";//
        std::cout << "You name "<<Name<<" Class "<<Rogue<< std::endl;
        break;
        }

        else 
        {
        std::cout<<"You must choose between classes 1,2,3 press any key to return to choose menu"<<std::endl;
        getch();
        std::cout << "\033[2J\033[1;1H";//
        }

      }    
      break;
      }

      else if (input == 2)
      {
      std::cout << "You have selected No, press any key to exit" << std::endl;
      getch();
      std::exit(0);
      break;
      }

      else
      {
      std::cout << "You must choose between Yes or No 1,2 press any key to return to choose menu" << std::endl;
      getch();
      std::cout << "\033[2J\033[1;1H";//
    }
                
  }

 std::cout<<"To continu press any key " <<std::endl;
 getch();
 std::cout << "\033[2J\033[1;1H";//
 
}

void scene::crossroads()
{
  music.openFromFile("Exploring.wav");
  music.setVolume(70);
  music.play();
  music.setLoop(true);
  
  std::cout<<"One day, a stranger arrived in town. He was tall with a mysterious air about him." << std::endl; 
  std::cout<<"He claimed to be a hero, come to vanquish the monsters and restore peace to the kingdom." << std::endl; 
  std::cout<<"The people were skeptical, but desperate for help, so they agreed to let him try." << std::endl;
  Character_define();
  std::cout<<" will try to fight the darkness..."<<std::endl;
  std::cout<<"Press any key to continue "<<std::endl;
  getch();
  std::cout << "\033[2J\033[1;1H";//

  
  while(true) 
   {  
   std::cout<<"You have 3 roads, chose one "<<std::endl;
   std::cout << "Enter 1 for (Village)" <<std::endl;
   std::cout << "Enter 2 for (Forest)" <<std::endl;
   std::cout << "Enter 3 for (Caves)" <<std::endl;
   Take_road(road);

   if(road == 1)
    {
    std::cout << "\033[2J\033[1;1H";//
    std::cout <<Name<<" chose Village road" <<std::endl; 
    break;
    }

    else if(road == 2)
    {
    std::cout << "\033[2J\033[1;1H";//
    std::cout <<Name<<" chose Forest road" <<std::endl; 
    break;
    }

    else if(road == 3)
    {
    std::cout << "\033[2J\033[1;1H";//
    std::cout <<Name<<" chose Caves road" <<std::endl; 
    break;
    }

    else 
    {
    std::cout<<"You must choose between roads 1,2,3 press any key to return to choose menu"<<std::endl;
    getch();
    std::cout << "\033[2J\033[1;1H";//
    }
                        
  }
         
}
void scene::chest_scene()
{
  std::cout<<"You find a chest: "<<std::endl;
  
  while(true) 
  {  
   std::cout<<"Do you want to open it? "<<std::endl;
   std::cout << "Enter 1 for (Yes)" <<std::endl;
   std::cout << "Enter 2 for (No)" <<std::endl;
   Take_chest(chest);

   if(chest == 1)
    {
    std::cout << "\033[2J\033[1;1H";//
    std::cout <<Name<<" open chest" <<std::endl; 
    break;
    }

    else if(chest == 2)
    {
    std::cout << "\033[2J\033[1;1H";//
    std::cout <<Name<<" continue traveling" <<std::endl; 
    break;
    }

    else 
    {
    std::cout<<"You must choose between 1,2 press any key to return to choose menu"<<std::endl;
    getch();
    std::cout << "\033[2J\033[1;1H";//
    }

  }

}


void scene::Character_define()
{
 if(Character_Class == 1)
 {

 std::cout<<Name<<" "<<Wizard; 
 }

 else if(Character_Class == 2)
 {

 std::cout<<Name<<" "<<Warior;
 }

 else if(Character_Class == 3)
 {
 std::cout<<Name<<" "<<Rogue;
 }
}
 
void scene::Take_road(int& road)
    {
        std::cin>> road;
    }

void scene::Take_chest(int& chest)
    {
        std::cin>> chest;
    }

 void scene::Take_class(int& Character_Class)// pentru a salva valoarea Character_class
    {
        std::cin>> Character_Class;
    }