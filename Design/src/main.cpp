#include <iostream>
#include "singleton.h"

singleton* singleton::instance = 0;

int main(int argc, char const *argv[])
{
    singleton* s = s->getInstance();
    std::cout << s->getData() << std::endl;
    s->setData(50);
    std::cout << s->getData() << std::endl;

    singleton* s2 = s2->getInstance();
    std::cout << s2->getData() << std::endl;
    return 0;
}
