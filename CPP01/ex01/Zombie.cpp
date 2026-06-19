#include "Zombie.hpp"

Zombie::Zombie()
{
    this->name = "Default Zombie";
}

Zombie::Zombie(std::string name)
{
    this->name = name;
}

void Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << name << " has been destroyed." << std::endl;
}
/*
void Zombie::setName(std::string name)
{
    this->name = name;
}
*/