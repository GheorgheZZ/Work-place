#include "scene.h"
//sf::Music music;



scene::~scene()
{
}
void scene::PlayButon()
{
  music.openFromFile("Main_Menu.wav");
  music.play();
  music.setLoop(true);
  std::cout << "\033[2J\033[1;1H";//         
  //std::cout << "\033[2J\033[1;1H";//escape sequences ANSI pentru a curăța terminalul
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
        Take_class(Character_Class);//salvez alegerea facuta
    
        if(Character_Class == 1)
        {
        std::cout << "\033[2J\033[1;1H";//
        std::cout << "You name "<<Name<<" Class Wizard"<< std::endl; 
        break;
        }

        else if(Character_Class == 2)
        {
        std::cout << "\033[2J\033[1;1H";//
        std::cout << "You name "<<Name<<" Class Warior"<< std::endl;
        break;
        }

        else if(Character_Class == 3)
        {
        std::cout << "\033[2J\033[1;1H";//
        std::cout << "You name "<<Name<<" Class Rogue"<< std::endl;
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
  std::cout<<" will try to fight the darkness..."<<std::endl;
  std::cout<<"Press any key to continue "<<std::endl;
  getch();
  std::cout << "\033[2J\033[1;1H";//
  std:: cout <<Name<<" curent stats are :"<<std::endl;
  Character_stat();
  getch();
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
    std::cout <<"You find an item : "<<std::endl;
    Character_define();
    getch();
      while(true) 
   { 
    std::cout << "\033[2J\033[1;1H";//
    std::cout <<"Do you want to pick up and equip item? "<<std::endl;
    std::cout << "Enter 1 for (Yes)" <<std::endl;
    std::cout << "Enter 2 for (No)" <<std::endl;
    Take_open(open);//////////////////////////////////////////////////

    if(open == 1)
      {
      std::cout << "\033[2J\033[1;1H";//
      std::cout <<Name<<" equipped item, new stats are :" <<std::endl;
      Character_define_Item_stat();
      getch();
      std::cout << "\033[2J\033[1;1H";//
      std::cout << "it's too quiet here..."<<std::endl;
      std::cout <<"you feel someone's gaze...a monster appears" <<std::endl;
      break;
      }

      else if(open == 2)
      {
      std::cout << "\033[2J\033[1;1H";//
      std:: cout <<Name<<" curent stats are :"<<std::endl;
      Character_stat();
      getch();
      std::cout << "\033[2J\033[1;1H";//
      std::cout << "it's too quiet here..."<<std::endl;
      std::cout <<"you feel someone's gaze...a monster appears" <<std::endl;
      break;
      }

      else 
      {
      std::cout<<"You must choose between 1,2 press any key to return to choose menu"<<std::endl;
      getch();
      std::cout << "\033[2J\033[1;1H";//
      }
    }
    break;
    }

    else if(chest == 2)
    {
    std::cout << "\033[2J\033[1;1H";//
    std::cout <<Name<<" continue traveling...." <<std::endl;
    std:: cout <<Name<<" curent stats are :"<<std::endl;
    Character_stat(); 
    getch();
    std::cout << "\033[2J\033[1;1H";//
    std::cout << "it's too quiet here..."<<std::endl;
    std::cout <<"you feel someone's gaze...a monster appears" <<std::endl;
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

void scene::battle_scene()
{
  music.openFromFile("BattleFinal.wav");
  music.setVolume(70);
  music.play();
  music.setLoop(true);
  getch();
    while(true) 
    { 
      

      if(open == 1)
      {
      std::cout << "\033[2J\033[1;1H";//
    
      break;
      }

      else if(open == 2)
      {
      std::cout << "\033[2J\033[1;1H";//
     
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

void scene::displaySwordParameters()
{
  item_sword sword;
  item_sword* swordPointer = &sword;
        std::cout << "Name: " << swordPointer->getName() << std::endl;
        std::cout << "Damage: " << swordPointer->getDamage() << std::endl;
        std::cout << "Health: " << swordPointer->getHealth() << std::endl;
        std::cout << "Defence: " << swordPointer->getDefence() << std::endl;
}
void scene::displayFinal_warrior()
{
    Game game;
        game.Final_warrior();
}
void scene::display_warrior_sword()
{
  Game game;
  game.Final_warrior_sword();
}

void scene::Take_road(int& road)
    {
        std::cin>> road;
    }
void scene::Take_chest(int& chest)
    {
        std::cin>> chest;
    }
void scene::Take_open(int& open)
    {
       std::cin>> open;
    }     
void scene::Take_class(int& Character_Class)// pentru a salva valoarea Character_class
    {
        std::cin>> Character_Class;
    }
void scene::dissplayWandParameters()
{
  item_wand wand;
  item_wand* wandPointer = &wand;
        std::cout << "Name: " << wandPointer->getName() << std::endl;
        std::cout << "Damage: " << wandPointer->getDamage() << std::endl;
        std::cout << "Health: " << wandPointer->getHealth() << std::endl;
        std::cout << "Defence: " << wandPointer->getDefence() << std::endl;  
}
void scene::displayFinal_Wizard()
{
    Game game;
        game.Final_wizard();  
}
void scene::display_wizard_wand()
{
  Game game;
  game.Final_wizard_wand();  
}
void scene::displayDaggerParameters()
{
  item_dagger dagger;
  item_dagger* daggerPointer = &dagger;
        std::cout << "Name: " << daggerPointer->getName() << std::endl;
        std::cout << "Damage: " << daggerPointer->getDamage() << std::endl;
        std::cout << "Health: " << daggerPointer->getHealth() << std::endl;
        std::cout << "Defence: " << daggerPointer->getDefence() << std::endl;  
}
void scene::displayFinal_Rogue()
{
    Game game;
        game.Final_Rogue();    
}
void scene::display_rogue_dagger()
{
  Game game;
  game.Final_Rogue_dagger();  
}



void scene::Character_define()
{
 if(Character_Class == 1)
  {
  dissplayWandParameters();
   
  }

  else if(Character_Class == 2)
  {
  displaySwordParameters();
  
  }

  else if(Character_Class == 3)
  {
  displayDaggerParameters();
  
  }
}

void scene::Character_define_Item_stat()
{
  {
    if(Character_Class == 1)
    {
    display_wizard_wand();
     
    }

    else if(Character_Class == 2)
    {
    display_warrior_sword();
    
    }

    else if(Character_Class == 3)
    {
    display_rogue_dagger();
    
    }
  }
}

void scene::Character_stat()
{
 if(Character_Class == 1)
  {
  displayFinal_Wizard();
   
  }

  else if(Character_Class == 2)
  {
  displayFinal_warrior();
  
  }

  else if(Character_Class == 3)
  {
  displayFinal_Rogue();
  
  }
}



void scene::BattleScene()
{  
    scene Scene;

    if(Character_Class == 1)
  {//wizard
      if(chest == 1 && open ==1)
      {//wizard + wand
        Game game;
        game.PlayerAddWizard_wand();
         heroHealth =game.geTotaltHealth();
         heroDamage =game.getTotalDamage();
         heroDefence =game.geTotaltDefence();
        
      }
      else 
      { // wizard
        Game game;
        game.PlayerAddWizard();
         heroHealth =game.geTotaltHealth();
         heroDamage =game.getTotalDamage();
         heroDefence =game.geTotaltDefence();
      }
      
  
  }

  else if(Character_Class == 2)
   {//warrior
      if(chest == 1 && open ==1)
      {//warrior + sword
        Game game;
        game.PlayerAddWarrior_sword();
         heroHealth =game.geTotaltHealth();
         heroDamage =game.getTotalDamage();
         heroDefence =game.geTotaltDefence();
      }
      else 
      { // warrior
         Game game;
        game.PlayerAddWarrior();
         heroHealth =game.geTotaltHealth();
         heroDamage =game.getTotalDamage();
         heroDefence =game.geTotaltDefence();
      }
      
  }

  else if(Character_Class == 3)
   {//rogue 
      if(chest == 1 && open ==1)
      {//rogue + dagger
         Game game;
        game.PlayerAddRogue_dagger();
         heroHealth =game.geTotaltHealth();
         heroDamage =game.getTotalDamage();
         heroDefence =game.geTotaltDefence();
      }
      else 
      { // rogue
         Game game;
        game.PlayerAddRogue();
         heroHealth =game.geTotaltHealth();
         heroDamage =game.getTotalDamage();
         heroDefence =game.geTotaltDefence();
      }
      
  }
   
    std::random_device rd;
  std::mt19937 eng(rd());
  std::uniform_int_distribution<> distr(0, 2);

    Enemy* enemy;
  switch (distr(eng)) {
    case 0:
      enemy = new Enemy_goblin();
      break;
    case 1:
      enemy = new Enemy_orc();
      break;
    case 2:
      enemy = new Enemy_troll();
      break;
  }

  int enemyHealth = enemy->getHealth();
  int enemyDamage = enemy->getDamage();
  int enemyDefence = enemy->getDefence();

  while (heroHealth > 0 && enemyHealth > 0) {
    enemyHealth = enemyHealth - (heroDamage - enemyDefence);
    std::cout << "Hero attacked " << enemy->getType() << "! Enemy health is now "<< enemyHealth << std::endl;
    getch();
    if (enemyHealth <= 0) {
      break;
    }
    heroHealth = heroHealth - (enemyDamage - heroDefence);
    std::cout << enemy->getType() << " attacked hero! Hero health is now "<< heroHealth << std::endl;
    getch();
  }
  if (heroHealth <= 0) {
    std::cout << "Hero has been defeated" << std::endl;
    getch();
  } else {
    std::cout << "Hero has defeated the " << enemy->getType() << "!" << std::endl;
    getch();
  }
 


    
}




