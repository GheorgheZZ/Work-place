#include <iostream>
int main() {
    int an;
    const int a=2022;
    std::cout<<"In ce an va-ti nascut?"<<std::endl;
    std::cin>> an;
    std::cout<<"Aveti " << a-an;
    std::cout<<" ani"<<std::endl;
    return 0;
}