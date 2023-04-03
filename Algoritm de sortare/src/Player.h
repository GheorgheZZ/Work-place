#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <iostream>
#pragma once

class Player
{
public:
    Player(std::string name);
    static int NumberOfPlayers;
    ~Player();

private:
    std::string m_playerName;
};

#endif