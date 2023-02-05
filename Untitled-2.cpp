#include <iostream>
int main()
{
  std::string nume;

  std::cout << "Introdu numele tau: ";
  std::getline(std::cin, nume);
  std::cout << "Bine ai venit, " << nume << "!" << std::endl;
  std::cout << "Apasa orice tasta pentru a continua..." << std::endl;

  getchar();
  std::cout << "Done!" << std::endl;

  return 0;
}