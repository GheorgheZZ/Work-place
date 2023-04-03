#ifndef PLAYER_H
#define PLAYER_H

#pragma once
template<class T>
class Player
{
public:
   
void setData(T data)
{
    this->data =data;
}


private:
 T data;
};

#endif