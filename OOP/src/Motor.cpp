#include "Motor.h"
#include <iostream>
#include <string>
Motor::Motor(int caiPutere)
{
    this->caiPutere =caiPutere; //athis -> pointer catre Motor
}

Motor::~Motor()
{

}

void Motor::Start()
{
    std::cout<<"Car has started\n";
}