#include "Zombie.hpp"

int main()
{
    Zombie *zombiehorde = zombieHorde(5, "San Pancrazio");
    for (int i = 0; i < 5; i++)
    {
        zombiehorde[i].announce();
    }

    delete[] zombiehorde;
    return 0;
}