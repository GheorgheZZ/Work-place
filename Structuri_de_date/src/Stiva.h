#ifndef STIVA_H
#define STIVA_H
#include <iostream>
#pragma once

#define MAX_STACK_SIZE 10


class Stiva
{
public:
    int a[MAX_STACK_SIZE];
    Stiva();
    ~Stiva();

    bool push(int x);
    int pop();
    int peek();// sa ne dea valoare virf stivei fara sa stearga
    bool isEmpty();// daca e empty ori nu
    bool contains(int x);// daca acest parametru exista in stiva sau nu


private:
    int top;
};

#endif