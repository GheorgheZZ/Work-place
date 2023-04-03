#include "singleton.h"

singleton::singleton()
{
    data = 0;
}


int singleton::getData()
{
    return data;
}

void singleton::setData(int data)
{
    this->data = data;
}

singleton* singleton::getInstance()
{
    if(instance != nullptr)
    return instance;
    else
    {
        instance = new singleton();
        return instance;
    }
}