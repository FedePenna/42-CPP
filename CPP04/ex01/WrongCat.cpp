#include "WrongCat.hpp"

// Default constructor
WrongCat::WrongCat(void)
{
    this->_type = "WrongCat";
    std::cout << "Wrong cat Default constructor called" << std::endl;
}

// Copy constructor
WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
    std::cout << "Wrong Cat Copy constructor called" << std::endl;
    (void) other;
    return ;
}

// Assignment operator overload
WrongCat &WrongCat::operator=(const WrongCat &other)
{
    std::cout << "Wrong Cat Assignment operator called" << std::endl;
    (void) other;
    return (*this);
}

// Destructor
WrongCat::~WrongCat(void)
{
    std::cout << "Wrong cat Destructor called" << std::endl;
    return ;
}

void WrongCat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}

