#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
  private:
	int _fpvalue;
	static const int _fractionalBits = 8;

  public:
	Fixed();
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);
};