#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie *Zombie::newZombie(std::string name)
{
    Zombie *new_zombie = new Zombie(name);
    return new_zombie;
}

void Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << name << " has been destroyed." << std::endl;
}

void Zombie::randomChump(std::string name)
{
    Zombie *new_zombie = new Zombie(name);
    new_zombie->announce();
    delete new_zombie;
}

Zombie *Zombie::zombieHorde(int N, std::string name)
{
    Zombie *horde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        horde[i] = Zombie(name + "_" + std::to_string(i));
    }
    return horde;
}