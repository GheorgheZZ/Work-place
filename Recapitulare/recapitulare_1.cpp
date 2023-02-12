#include <iostream>

void foo(int param)
{
    std::cout <<param <<std::endl;
}

int increment(int param)
{
    return ++param;
}
int main () {
    int param =5;
    foo(param);
    std::cout<<"valoarea incrementata este " << increment(param) <<std::endl;
    std::cout <<"valoarea lui param este " << param <<std::endl;
    return 0;
}