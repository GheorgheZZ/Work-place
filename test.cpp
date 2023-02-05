#include <iostream>
#include <cstdlib>

int main() {
   int n;
   std::system("start D:\\Work_place\\D++\\src\\Main_Menu.wav");
   std::cin>>n;
   std::system("taskkill /IM D:\\Work_place\\D++\\src\\Main_Menu.wav");
   return 0;
}