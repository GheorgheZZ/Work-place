#include "TV.h"

TV::TV(int height, int widh):
m_height(height),
m_widh(widh)
{
   
}

TV::~TV()
{

}

void TV::calc_arie()
{
    std::cout <<"Aria televizorului este " << m_height * m_widh << std::endl;
}