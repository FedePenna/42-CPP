#include "ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap(std::string name)
{
    _name = name;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    std::cout << "Default constructor (ClapTrap " << name << ") called" << std::endl;
    return ;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "Copy constructor (ClapTrap " << other._name << ") called" << std::endl;
    *this = other;
    return ;
}

// Assignment operator overload
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "Assignment operator (ClapTrap " << other._name << ") called" << std::endl;
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    return (*this);
}

// Destructor
ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor (ClapTrap " << _name << ") called" << std::endl;
    return ;
}

void ClapTrap::attack(const std::string &target)
{
    if (_energyPoints == 0)
        std::cout << "ClapTrap " << _name << " has no energy left to attack! Pity..." << std::endl;
    else if (_hitPoints == 0)
        std::cout << "ClapTrap " << _name << " has died..." << std::endl;
    else
    {
        _energyPoints--;
        std::cout << "ClapTrap " << _name << " casts Firaga on " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints == 0)
        std::cout << _name << " has died..." << std::endl;
    else
    {
        if (amount > _hitPoints)
            _hitPoints = 0;
        else
            _hitPoints -= amount;
        std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
        if (_hitPoints == 0)
            std::cout << "ClapTrap " << _name << " has died..." << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints == 0)
        std::cout << "ClapTrap " << _name << " has no energy left to heal! Dagger has died..." << std::endl;
    else
    {
        _energyPoints--;
        _hitPoints += amount;
        std::cout << "ClapTrap " << _name << " is healed for " << amount << " health! thank you Dagger!" << std::endl;
    }
}