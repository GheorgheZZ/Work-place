#ifndef SINGLETON_H
#define SINGLETON_H

#pragma once

class singleton
{
public:
    int getData();
    void setData(int data);
    static singleton* getInstance(); // o metoda ce returneaza o instanta de singleton


private:
    //constructorul este privat
    singleton();
    static singleton* instance; //pointer catr instanta obiectului
    int data;
    


};

#endif