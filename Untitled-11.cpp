#include <iostream>
#include <Windows.h>
int main()
{
    // The name of the music file

    std::cout << "Playing music..." << std::endl;

    // Play the music file
    PlaySound("D:\\Work place\\D++\\src\\Main_Menu.wav", NULL, SND_FILENAME | SND_ASYNC);

    std::cout << "Music started playing." << std::endl;

    return 0;
}