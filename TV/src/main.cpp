#include <iostream>
#include <TV.h>
int main(int argc, char const *argv[])
{
    TV LG (15,30); // aici avem Televizorul cu marimea setata
    LG.calc_arie(); //aici pentru acest televizor calculam aria

    TV Samsung(18,40);
    Samsung.calc_arie();
    return 0;
}
