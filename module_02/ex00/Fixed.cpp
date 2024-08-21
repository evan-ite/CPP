/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evan-ite <evan-ite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 11:56:50 by evan-ite          #+#    #+#             */
/*   Updated: 2024/08/21 16:43:38 by evan-ite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


// Constructors
Fixed::Fixed(): _value(0) {
	std::cout << "\033[0;33mDefault Constructor called of Fixed\033[0m" << std::endl;
}

Fixed::Fixed(const Fixed &copy): _value(copy.getRawBits()) {
	std::cout << "\033[0;33mCopy Constructor called of Fixed\033[0m" << std::endl;
}

Fixed::Fixed(int value): _value(value) {
	std::cout << "\033[0;33mFields Constructor called of Fixed\033[0m" << std::endl;
}


// Destructor
Fixed::~Fixed() {
	std::cout << "\033[0;31mDestructor called of Fixed\033[0m" << std::endl;
}


// Operators
Fixed & Fixed::operator=(const Fixed &assign)
{
	if (this != &assign)
		_value = assign.getRawBits();
	std::cout << "\033[0;33mCopy assignment operator called of Fixed\033[0m" << std::endl;
	return *this;
}


// Getters / Setters
int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}
