#include "Dog.hpp"

// Default constructor
Dog::Dog(void)
{
    this->type = "Dog";
    this->_brain = new Brain();
    std::cout << "Default Dog constructor called" << std::endl;
}

// Copy constructor
Dog::Dog(const Dog &other) : Animal(other)
{
    this->_brain = new Brain(*other._brain);
    std::cout << "Dog Copy constructor called" << std::endl;
}

// Assignment operator overload
Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog Assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        *this->_brain = *other._brain;
    }
    return (*this);
}

// Destructor
Dog::~Dog(void)
{
    delete this->_brain;
    std::cout << "Dog Destructor called" << std::endl;
}

Brain *Dog::getBrain() const
{
    return this->_brain;
}

void Dog::makeSound() const
{
    std::cout << "Woof!" << std::endl;
}


