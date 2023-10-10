#include "Zombie.hpp"

int main()
{
    Zombie *zombie =NULL;
    zombie = zombie->zombieHorde(5,"Zombie");
    for (int i = 0; i < 5; i++)
    {
        zombie[i].announce();
    }
    delete [] zombie;
    
    return (0);
}