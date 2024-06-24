/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evan-ite <evan-ite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 11:57:21 by evan-ite          #+#    #+#             */
/*   Updated: 2024/06/21 11:57:22 by evan-ite         ###   ########.fr       */
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
	_value = number << this->_fracBits; // convert int to fixed point
	std::cout << "\e[0;33mInt Constructor called\e[0m" << std::endl;
}

Fixed::Fixed(const float number) {
	_value = static_cast<int>(roundf(number * (1 << this->_fracBits))); // convert float to fixed point
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

// Operators
Fixed Fixed::operator+(const Fixed &other) const {
	Fixed result;
	result.setRawBits(this->_value + other.getRawBits());
	return result;
}
Fixed Fixed::operator-(const Fixed &other) const {
	Fixed result;
	result.setRawBits(this->_value - other.getRawBits());
	return result;
}
Fixed Fixed::operator*(const Fixed &other) const {
	Fixed result;
	result.setRawBits((this->_value * other.getRawBits()) >> _fracBits);
	return result;
}
Fixed Fixed::operator/(const Fixed &other) const {
	Fixed result;
	result.setRawBits((this->_value << _fracBits) / other.getRawBits());
	return result;
}

bool Fixed::operator>(const Fixed &other) const {
	return this->_value > other.getRawBits();
}
bool Fixed::operator<(const Fixed &other) const {
	return this->_value < other.getRawBits();
}
bool Fixed::operator>=(const Fixed &other) const {
	return this->_value >= other.getRawBits();
}
bool Fixed::operator<=(const Fixed &other) const {
	return this->_value <= other.getRawBits();
}
bool Fixed::operator==(const Fixed &other) const {
	return this->_value == other.getRawBits();
}
bool Fixed::operator!=(const Fixed &other) const {
	return this->_value != other.getRawBits();
}

Fixed& Fixed::operator++() {
	_value++;
	return *this;
}
Fixed Fixed::operator++(int) {
	Fixed temp;
	temp.setRawBits(_value);
	_value++;
	return temp;
}
Fixed& Fixed::operator--() {
	_value--;
	return *this;
}
Fixed Fixed::operator--(int) {
	Fixed temp;
	temp.setRawBits(_value);
	_value--;
	return temp;
}

// Static member functions
Fixed& Fixed::min(Fixed &a, Fixed &b) {
    return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
    return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
    return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
    return (a > b) ? a : b;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
	os << fixed.toFloat();
	return os;
}
