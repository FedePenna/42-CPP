#include "Animal.hpp"

// Default constructor
Animal::Animal(void) : type("Animal")
{
    std::cout << "Default Animal constructor called" << std::endl;
    return ;
}

// Copy constructor
Animal::Animal(const Animal &other) : type(other.type)
{
    std::cout << "Animal Copy constructor called" << std::endl;
    return ;
}

// Assignment operator overload
Animal &Animal::operator=(const Animal &other)
{
    std::cout << "Animal Assignment operator called" << std::endl;
    if (this != &other)
        type = other.type;
    return (*this);
}

// Destructor
Animal::~Animal(void)
{
    std::cout << "Generic Animal Destructor called" << std::endl;
    return ;
}

void Animal::makeSound() const
{
    std::cout << "Animal sound!" << std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}
