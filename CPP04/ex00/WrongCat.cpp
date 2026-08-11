#include "WrongCat.hpp"

// Default constructor
WrongCat::WrongCat(void)
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}

// Copy constructor
WrongCat::WrongCat(const WrongCat &other)
{
    std::cout << "Copy constructor called" << std::endl;
    (void) other;
    return ;
}

// Assignment operator overload
WrongCat &WrongCat::operator=(const WrongCat &other)
{
    std::cout << "Assignment operator called" << std::endl;
    (void) other;
    return (*this);
}

// Destructor
WrongCat::~WrongCat(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

