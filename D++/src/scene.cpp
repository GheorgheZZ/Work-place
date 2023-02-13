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

pik.logo();//tot ce contine pik. e afisarea imaginilor
getch();
std::cout << "\033[2J\033[1;1H";//
std::cout << "\n\n\n\n\n\n\n\n\n\n " << std::endl;

pik.kastle();
  getch();
  while(true) // Un loop pentru play buton
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
      { std::cout <<"You need to choose a class, here is a short description, press any key "<<std::endl;
        getch();
        std::cout << "\033[2J\033[1;1H";//
        pik.wizard();
        getch();
        std::cout << "\033[2J\033[1;1H";//
        pik.warrior();
        getch();
        std::cout << "\033[2J\033[1;1H";//
        pik.rogue();
        getch();
        
        std::cout << "\033[2J\033[1;1H";//
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
        std::cout << "You name "<<Name<<" Class Rogue"<<std::endl;
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

 std::cout<<"To continue press any key " <<std::endl;
 getch();
 std::cout << "\033[2J\033[1;1H";//
}
//////////////////////////////////////////////////////////
//                                      scena Crossroads
void scene::crossroads()
{
  music.openFromFile("Exploring.wav");
  music.setVolume(70);
  music.play();
  music.setLoop(true);
  
  pik.road();
  getch();
  std::cout << "\033[2J\033[1;1H";//
  std:: cout <<Name<<" curent stats are :"<<std::endl;
  Character_stat();
  getch();
  std::cout<<"Press any key to continue "<<std::endl;
  getch();
  std::cout << "\033[2J\033[1;1H";//
  pik.crossroad();
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

/////////////////////////////////////////////////////////////////////////////
//                                         Scena chest
void scene::chest_scene()
{
  std::cout << "\033[2J\033[1;1H";//
  std::cout<<"You found a chest: "<<std::endl;
  pik.chest();
  getch();
  std::cout << "\033[2J\033[1;1H";//
  while(true) 
  {  
   std::cout<<"Do you want to open it? "<<std::endl;
   std::cout << "Enter 1 for (Yes)" <<std::endl;
   std::cout << "Enter 2 for (No)" <<std::endl;
   Take_chest(chest);

   if(chest == 1)
    {
    std::cout << "\033[2J\033[1;1H";//
    std::cout <<"You found an item : "<<std::endl;
    Character_define();
    getch();
      while(true) 
   { 
    std::cout << "\033[2J\033[1;1H";//
    std::cout <<"Do you want to pick up and equip item? "<<std::endl;
    std::cout << "Enter 1 for (Yes)" <<std::endl;
    std::cout << "Enter 2 for (No)" <<std::endl;
    Take_open(open);// salvez daca a fost echipat item ori nu

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



void scene::displaySwordParameters()
{
  
  item_sword* swordPointer = &sword;
        std::cout << "Name: " << swordPointer->getName() << std::endl;
        std::cout << "Damage: " << swordPointer->getDamage() << std::endl;
        std::cout << "Health: " << swordPointer->getHealth() << std::endl;
        std::cout << "Defence: " << swordPointer->getDefence() << std::endl;
}
void scene::displayFinal_warrior()
{
    
        game.Final_warrior();
}
void scene::display_warrior_sword()
{
  
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
  
  item_wand* wandPointer = &wand;
        std::cout << "Name: " << wandPointer->getName() << std::endl;
        std::cout << "Damage: " << wandPointer->getDamage() << std::endl;
        std::cout << "Health: " << wandPointer->getHealth() << std::endl;
        std::cout << "Defence: " << wandPointer->getDefence() << std::endl;  
}
void scene::displayFinal_Wizard()
{
        game.Final_wizard();  
}
void scene::display_wizard_wand()
{
  game.Final_wizard_wand();  
}
void scene::displayDaggerParameters()
{
  
  item_dagger* daggerPointer = &dagger;
        std::cout << "Name: " << daggerPointer->getName() << std::endl;
        std::cout << "Damage: " << daggerPointer->getDamage() << std::endl;
        std::cout << "Health: " << daggerPointer->getHealth() << std::endl;
        std::cout << "Defence: " << daggerPointer->getDefence() << std::endl;  
}
void scene::displayFinal_Rogue()
{
        game.Final_Rogue();    
}
void scene::display_rogue_dagger()
{
  game.Final_Rogue_dagger();  
}



void scene::Character_define() //in functie de clasa in chest apare item pentru clasa lui
{
 if(Character_Class == 1)
  {
  pik.vand();
  dissplayWandParameters();
   
  }

  else if(Character_Class == 2)
  {
  pik.sword();
  displaySwordParameters();
  
  }

  else if(Character_Class == 3)
  {
    pik.dagger();
  displayDaggerParameters();
  
  }
}

void scene::Character_define_Item_stat()  // afiseaza parametri la jucator cu parametri la item
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

void scene::Character_stat()  // afiseaza parametri claselor fara item
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
{  music.openFromFile("BattleFinal.wav");
  music.setVolume(70);
  music.play();
  music.setLoop(true);
    scene Scene;
    getch();
    if(Character_Class == 1)
 {//wizard
      if(chest == 1 && open ==1)
      {//wizard + wand parametri
        
        game.PlayerAddWizard_wand();
         heroHealth =game.geTotaltHealth();
         heroDamage =game.getTotalDamage();
         heroDefence =game.geTotaltDefence();
        
      }
      else 
      { // wizard parametri
        
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
        
        game.PlayerAddWarrior_sword();
         heroHealth =game.geTotaltHealth();
         heroDamage =game.getTotalDamage();
         heroDefence =game.geTotaltDefence();
      }
      else 
      { // warrior
         
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
         
        game.PlayerAddRogue_dagger();
         heroHealth =game.geTotaltHealth();
         heroDamage =game.getTotalDamage();
         heroDefence =game.geTotaltDefence();
      }
      else 
      { // rogue
         
        game.PlayerAddRogue();
         heroHealth =game.geTotaltHealth();
         heroDamage =game.getTotalDamage();
         heroDefence =game.geTotaltDefence();
      }
      
  }
   
    std::random_device rd;
  std::mt19937 eng(rd()); //generator de numere pseudo-aleatoare, 
  //rd() returneaza un seed generat din surse externe, cum ar fi timpul de sistem sau performanta hard disk-ului
  std::uniform_int_distribution<> distr(0, 2); //generam numere intregi intre 0 si 2 adica 3 variante

    Enemy* enemy;
  switch (distr(eng))// random intre 0 si 3
   {
      case 0:
        enemy = new Enemy_goblin();
        pik.goblin();
        break;
      case 1:
        enemy = new Enemy_orc();
        pik.orc();
        break;
      case 2:
        enemy = new Enemy_skelet();
        pik.skelet();
        break;
    }

  int enemyHealth = enemy->getHealth(); //in functie de care Enemy a nimerit luam parametrii lui
  int enemyDamage = enemy->getDamage();
  int enemyDefence = enemy->getDefence();

  while (heroHealth > 0 && enemyHealth > 0) //un loop pentru battle ca sa luam jucatori si Enemy vii :D
  {
    enemyHealth = enemyHealth - (heroDamage - enemyDefence); // aici jucatorul paleste Enemy si pur si simplu scadem damage din defence
    std::cout << "Hero attacked " << enemy->getType() << "! Enemy health is now "<< enemyHealth << std::endl;
    getch();

    if (enemyHealth <= 0) // daca Enemy HP ajunge la 0 oprim loop
    {
      break;
    }
    heroHealth = heroHealth - (enemyDamage - heroDefence);// aici HP eroului se scade din Enemy damage
    std::cout <<"                                                  "<< enemy->getType() << " attacked hero! Hero health is now "<< heroHealth << std::endl;
    getch();
  }
  if (heroHealth <= 0)  // daca eroul moare game over
  {
    std::cout << "Hero has been defeated" << std::endl;
    std::cout << "\033[2J\033[1;1H";//
    pik.gameover();
    getch();
    delete enemy; //stergem Enemy din Heap
  } else {
    std::cout << "Hero has defeated the " << enemy->getType() << "!" << std::endl; // eroul castiga
    getch();
    std::cout << "\033[2J\033[1;1H";//
    std::cout<< "You continued the journey "<<std::endl;
    getch();
    std::cout << "\033[2J\033[1;1H";//
    music.stop();// oprim muzica precedenta
    music.openFromFile("arrive.wav"); // si pornim noul soundtrack pentru cei care au ajuns :D
    music.setVolume(70);
    music.play();
    music.setLoop(true);
    std::cout<< "You arrived "<<std::endl;
    pik.arrive();
    delete enemy; //stergem Enemy din Heap
    getch();
  }
 


    
}




