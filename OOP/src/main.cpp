#include <iostream>
#include "ContBancar.h"
#include "Bicicleta.h"
#include "Car.h"
#include "TV.h"
#include "Persoana.h"
#include "zi_de_nastere.h"
#include <vector>
class A
{
  public:
  A()
  {
  std::cout << "A was created\n";
  }
  ~A()
  {
  std::cout << "A was deleted\n";
  }

};
class B: virtual public A
{
public:
  B()
  {
  std::cout << "B was created\n";
  }
  ~B()
  {
  std::cout << "B was deleted\n";
  }
};
class C: virtual public A
{
public:
  C()
  {
  std::cout << "C was created\n";
  }
  ~C()
  {
  std::cout << "C was deleted\n";
  }
};
class D: public B, public C  // care e primul acela e instantat
{
public:
  D()
  {
  std::cout << "D was created\n";
  }
  ~D()
  {
  std::cout << "D was deleted\n";
  }
};

class Enemy        ////////////////
{

  public:
  Enemy()
  {
      std::cout <<"Enemy Created\n";
  }
  void setAttackPower(int a)
  {
      attackPower = a;
  }
  virtual ~Enemy()
  {
    std::cout <<"Enemy Destroyed\n";
  }
  virtual void Attack() // 
  {
    std::cout<<"Enemy attacks with power "<< attackPower <<std::endl;
  }

  protected:
  int attackPower;
};


class Ninja: public Enemy ///////////////
{
  public:
  Ninja()
  {
    std::cout << "Ninja Created\n";
  }
  void Attack() override //semnaleaza faptul ca metoda este supra scrisa
  {
    std::cout<<"Ninja attacks with power "<< attackPower <<std::endl;
  }
  ~Ninja()
  {
    std::cout << "Ninja Destroyed\n";
  }
};

class Monster: public Enemy    ////////////////////
{
  public:
  Monster()
  {
    std::cout << "Monster Created\n";
  }
  void Attack() override
  {
    std::cout <<"Monster attacks with power " << attackPower <<std::endl;
  }
  ~Monster()
  {
    std::cout <<"Monster Destroyed\n";
  }
};

class Orc: public Enemy
{
  public:
  Orc()
  {
    std::cout <<"Orc created\n";
  }
  void Attack() override
  {
    std::cout <<"Orc attacls with power" <<std::endl;
  }
  ~Orc()
  {
    std::cout <<"Orc Destroyed\n";
  }

};

  void BattleScene(Enemy* e)
  {
  std::cout <<"Un inamic te ataca\n";
  e->Attack();
  }

void EnemyCleanUp(Enemy* e)
{
  std::cout <<"we will cleanup/delete a Enemy obj \n";
  
}

int main(int argc, char const *argv[])
{
 // D d;

  std::vector <Enemy*> EnemyList;

  EnemyList.push_back(new Ninja()); // creez pe heap un ninja si il bag in vectorul EnemyList
  EnemyList.push_back(new Orc());
  EnemyList.push_back(new Monster());

 // for(int i = 0; i< EnemyList.size(); i++)
 // {
 //   BattleScene(EnemyList[i]);
 // }
 // for(std::vector<Enemy*>::iterator it= EnemyList.begin(); it!= EnemyList.end();it++ )
 // {
 //   BattleScene(*it);
 // }

  //for(auto it= EnemyList.begin(); it!= EnemyList.end();it++ ) // el deduce pe contex despre ce tip de date este vorba
 // {
 //   BattleScene(*it);
 // }
  for(const auto& enemy : EnemyList) // cel mai eficient (rapid)
  {
    BattleScene(enemy);
  }

  EnemyList.clear();
  std::cout <<"Lista are dimensiunea " << EnemyList.size() <<std::endl;

  //Monster m;
 // Ninja* n = new Ninja();

  //Enemy* e1 = n;
  
 // BattleScene(e1);
 // EnemyCleanUp(e1);

  //delete e1;
 // Enemy* e2 = new Ninja();





  /*Enemy* e2 = &n;

  e1->setAttackPower(20);
  e2->setAttackPower(30);
  BattleScene(e1);
  BattleScene(e2);
  Orc o;
  Enemy* e3 = &o;   ///& adresa lui o
  BattleScene(e3);*/

    return 0;
}
