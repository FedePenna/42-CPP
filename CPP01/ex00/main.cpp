#include "Zombie.hpp"

int main()
{
    Zombie *zombie = newZombie("San Pancrazio");
    zombie->announce();
    randomChump("Gianfranco");
    randomChump("Ernesto");

    delete zombie;
    return 0;
}