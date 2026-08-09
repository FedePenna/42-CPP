#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)    
{
    ClapTrap::operator=(other);
    std::cout << "FragTrap assignment operator called" << std::endl;
    return *this;
}

void FragTrap::attack(const std::string &target)
{
    if (_energyPoints == 0)
        std::cout << _name << " has no energy left to attack! Pity..." << std::endl;
    else if (_hitPoints == 0)
        std::cout << _name << " has died..." << std::endl;
    else
    {
        _energyPoints--;
        std::cout << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    }
}

void FragTrap::highFivesGuys()
{
    std::cout << _name << " is requesting a high five!" << std::endl;
}