#include "Cat.hpp"

// Default constructor
Cat::Cat(void)
{
    this->type = "Cat";
    this->_brain = new Brain();
    std::cout << "Default Cat constructor called" << std::endl;
}

// Copy constructor
Cat::Cat(const Cat &other) : Animal(other)
{
    this->_brain = new Brain(*other._brain);
    std::cout << "Cat Copy constructor called" << std::endl;
}

// Assignment operator overload
Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat Assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        *this->_brain = *other._brain;
    }
    return (*this);
}

Brain *Cat::getBrain() const
{
    return this->_brain;
}

// Destructor
Cat::~Cat(void)
{
    delete this->_brain;
    std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}

