#include "Player.h"



Player::Player(std::string name)
{
    NumberOfPlayers++;
    m_playerName = name;
    std::cout <<"PLayer " << m_playerName <<" has been created\n" <<std::endl;

}

Player::~Player()
{
    NumberOfPlayers--;
    std::cout <<"PLayer " << m_playerName <<" has been deleted\n" <<std::endl;
    
}