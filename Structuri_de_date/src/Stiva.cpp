#include "Stiva.h"

Stiva::Stiva()
{
 top = -1;
}

Stiva::~Stiva()
{

}

bool Stiva::push(int x)
{
    if( top >= (MAX_STACK_SIZE -1))
    {
        std::cout <<"stack overflow!!" <<std::endl;
        return false;
    }
    else {
        a[++top] = x;
        std::cout <<x <<" pushed into the stack\n";
        return true;
    }

}


int Stiva::pop()
{
    if(top < 0)
    {
        std::cout <<"Stack underflow\n";
        return 0;
    }
    else
    {
        int x = a [top--];
        std::cout <<x<< " poped from the stack\n";
        return x;
    }

}

int Stiva::peek()
{
    std::cout << "Valoarea din varf este "<<top <<std::endl;
    return top;
}

bool Stiva::isEmpty()
{
    if(top >= (MAX_STACK_SIZE -1))
    {
        std::cout <<"Stack its full"<<std::endl;
        return false;
    }
    else if (top < 0)
    {
        std::cout <<"stack its empty"<<std::endl;
        return true;
    }
   
}

bool Stiva::contains(int x)
{
    if (x <= top && x > -1)
    {
        std::cout << "acest parametru exista in stiva" <<std::endl;
        return true;
    }
    else 
    {
        std::cout <<"acest parametru nu exista in stiva" <<std::endl;
        return false;
    }
    
}