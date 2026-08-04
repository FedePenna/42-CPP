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
	Fixed(); //constructor
	Fixed(const Fixed &other); //copy constructor
	~Fixed(); //destructor
	
	Fixed &operator=(const Fixed &other); //copy assignment operator

	Fixed(const int value); //int constructor
	Fixed(const float value); //float constructor

	bool operator>(const Fixed &other) const; //greater than operator
	bool operator<(const Fixed &other) const; //less than operator
	bool operator>=(const Fixed &other) const; //greater than or equal to operator
	bool operator<=(const Fixed &other) const; //less than or equal to operator
	bool operator==(const Fixed &other) const; //equal to operator
	bool operator!=(const Fixed &other) const; //not equal to operator

	Fixed operator+(const Fixed &other) const; //addition operator
	Fixed operator-(const Fixed &other) const; //subtraction operator
	Fixed operator*(const Fixed &other) const; //multiplication operator
	Fixed operator/(const Fixed &other) const; //division operator

	Fixed &operator++(); //pre-increment operator
	Fixed operator++(int); //post-increment operator
	Fixed &operator--(); //pre-decrement operator
	Fixed operator--(int); //post-decrement operator
	
	int getRawBits(void) const; //get raw bits
	void setRawBits(int const raw); //set raw bits
	float toFloat(void) const; //convert to float
	int toInt(void) const; //convert to integer
	static Fixed &min(Fixed &a, Fixed &b); //min function
	static const Fixed &min(const Fixed &a, const Fixed &b); //const min function
	static Fixed &max(Fixed &a, Fixed &b); //max function
	static const Fixed &max(const Fixed &a, const Fixed &b); //const max function
};
std::ostream &operator<<(std::ostream &out, const Fixed &fixed);