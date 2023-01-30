#ifndef TV_H
#define TV_H

#pragma once
#include<iostream>

class TV
{
public:
    TV(int height, int widh);
    
    ~TV();
    void calc_arie();
  

private:
int m_height;
int m_widh;

};

#endif