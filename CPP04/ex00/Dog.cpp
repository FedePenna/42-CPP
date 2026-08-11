#include "Dog.hpp"

// Default constructor
Dog::Dog(void)
{
    this->type = "Dog";
    std::cout << "Default constructor called" << std::endl;
}

// Copy constructor
Dog::Dog(const Dog &other)
{
    std::cout << "Copy constructor called" << std::endl;
}

// Assignment operator overload
Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Assignment operator called" << std::endl;
    if (this != &other)
        Animal::operator=(other);
    return (*this);
}

// Destructor
Dog::~Dog(void)
{
    std::cout << "Destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof!" << std::endl;
}


