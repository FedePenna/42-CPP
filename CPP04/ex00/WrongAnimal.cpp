#include "WrongAnimal.hpp"

// Default constructor
WrongAnimal::WrongAnimal(void)
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}

// Copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    std::cout << "Copy constructor called" << std::endl;
    (void) other;
    return ;
}

// Assignment operator overload
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    std::cout << "Assignment operator called" << std::endl;
    (void) other;
    return (*this);
}

// Destructor
WrongAnimal::~WrongAnimal(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound!" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->_type;
}
