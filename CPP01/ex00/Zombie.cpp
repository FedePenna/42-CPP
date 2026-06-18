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