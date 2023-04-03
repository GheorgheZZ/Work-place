#include <iostream>
#include <memory>




//std::unique_ptr -> smart pointer ce asigura o singura referinta spre obiect si sterge obiectul cind ii out of scope
//std::shared_ptr -> smart pointer ce poate avea mai multi pointeri spre acelasi obiect, dar cand nu mai este nici unul cheama delete


class Entity
{
public:
Entity()
{
    std::cout <<"A entity was created\n";
}
~Entity()
{
    std::cout << "A entity was destroyed\n";
}


};
void CreateEntityUniquePtr()
{//sintaxa: std:: unique_ptr numePtr = std ::make_unique<tip>();
  //  std::unique_ptr<Entity> e (Entity);
 //   std::unique_ptr<Entity> e (new Entity());
    std::unique_ptr<Entity> e = std::make_unique<Entity>(); // cea mai buna metoda si mai eficienta
std::cout <<"se termina stiva CreateEntityUniquePtr\n";
}

void CreateEntity()
{
    Entity* e = new Entity();
    delete e;
}



 std::shared_ptr<Entity> CreateEntitySharedPtr()

{   //stintaxa std::shared_ptr<tip> numePtr = std::make_shared<tip>(); 
 std::shared_ptr<Entity> e = std::make_shared<Entity>();
    std::cout << "Ref count " << e.use_count() << std::endl;
    std::cout <<"se termina stiva CreateEntitySharedPtr\n";
    return e;
}

struct Player
{
    Player() {std::cout <<"a player was created\n";}
    std::weak_ptr<Player> companion;
   // std::shared_ptr<Player> companion;  // dependinta circulara
    ~Player() {std::cout <<"a player was destroyed\n";}
    
};



int main(int argc, char const *argv[])
{
    std::shared_ptr<Player> Sergiu = std::make_shared<Player>();
    std::shared_ptr<Player> Stefan = std::make_shared<Player>();
    Sergiu -> companion = Stefan;
    Stefan -> companion = Sergiu;

    
    std::shared_ptr<Player> p_shared = std::make_shared<Player>();
    std::shared_ptr<Player>p_weak(p_shared);
    


//  CreateEntity();
CreateEntityUniquePtr();

std::shared_ptr<Entity> e = CreateEntitySharedPtr();
std::shared_ptr<Entity> e2 = e;
  std::cout << "Ref count " << e.use_count() << std::endl;

std::cout <<"se termina stiva stiva maine\n";
//std::unique_ptr<Entity> e = std::make_unique<Entity>();

//std::unique_ptr<Entity> e2 = std::move(e); // ia locul de memoire si il muta in alt loc

  return 0;
}
