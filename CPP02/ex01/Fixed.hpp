#pragma once

#include <iostream>
#include <cmath>
#include <ostream>

class Fixed
{
  private:
	int _fpvalue;
	static const int _fractionalBits = 8;

  public:
	Fixed();
	Fixed(const Fixed &other);
	~Fixed();
	
	Fixed &operator=(const Fixed &other);

	Fixed(const int value);
	Fixed(const float value);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};
std::ostream &operator<<(std::ostream &out, const Fixed &fixed);