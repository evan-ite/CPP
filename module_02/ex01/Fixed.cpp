/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evan-ite <evan-ite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 11:57:05 by evan-ite          #+#    #+#             */
/*   Updated: 2024/06/21 12:06:54 by evan-ite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iomanip>
#include <math.h>


// Constructors
Fixed::Fixed(): _value(0) {
	std::cout << "\e[0;33mDefault Constructor called\e[0m" << std::endl;
}

Fixed::Fixed(const Fixed &copy): _value(copy.getRawBits()) {
	std::cout << "\e[0;33mCopy Constructor called\e[0m" << std::endl;
}

Fixed::Fixed(const int number) {
	_value = number << _fracBits; // convert int to fixed point
	std::cout << "\e[0;33mInt Constructor called\e[0m" << std::endl;
}

Fixed::Fixed(const float number) {
	_value = static_cast<int>(roundf(number * (1 << _fracBits))); // convert float to fixed point
	std::cout << "\e[0;33mFloat Constructor called\e[0m" << std::endl;
}

// Destructor
Fixed::~Fixed() {
	std::cout << "\e[0;31mDestructor called\e[0m" << std::endl;
}


// Operators
Fixed & Fixed::operator=(const Fixed &assign) {
	if (this != &assign)
		_value = assign.getRawBits();
	std::cout << "\e[0;33mCopy assignment operator called\e[0m" << std::endl;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
	os << fixed.toFloat();
	return os;
}

// Getters / Setters
int Fixed::getRawBits() const {
	return _value;
}

void Fixed::setRawBits(int const raw) {
	_value = raw;
}

float Fixed::toFloat(void) const {
	return static_cast<float>(_value) / (1 << _fracBits);
}

int Fixed::toInt( void ) const{
	return _value >> _fracBits;
}



