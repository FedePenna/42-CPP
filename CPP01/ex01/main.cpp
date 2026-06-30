#include "Zombie.hpp"

int main()
{
    int N = 8;
    
    Zombie *zombiehorde = zombieHorde(N, "San Pancrazio");
    for (int i = 0; i < N; i++)
    {
        zombiehorde[i].announce();
    }
    delete[] zombiehorde;
    return (0);
}