#include "Fixed.hpp"

Fixed::Fixed() : _fpvalue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        _fpvalue = other.getRawBits();
    }
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fpvalue;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_fpvalue = raw;
}

Fixed::Fixed(const int value) : _fpvalue(value << _fractionalBits)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : _fpvalue(static_cast<int>(roundf(value * (1 << _fractionalBits))))
{
    std::cout << "Float constructor called" << std::endl;
}

int Fixed::toInt(void) const
{
    return _fpvalue >> _fractionalBits;
}

float Fixed::toFloat(void) const
{
    return static_cast<float>(_fpvalue) / (1 << _fractionalBits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}