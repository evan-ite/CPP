#include "Fixed.hpp"


// Constructors
Fixed::Fixed(): _value(0) {
	std::cout << "\e[0;33mDefault Constructor called of Fixed\e[0m" << std::endl;
}

Fixed::Fixed(const Fixed &copy): _value(copy.getRawBits()) {
	std::cout << "\e[0;33mCopy Constructor called of Fixed\e[0m" << std::endl;
}

Fixed::Fixed(int value): _value(value) {
	std::cout << "\e[0;33mFields Constructor called of Fixed\e[0m" << std::endl;
}


// Destructor
Fixed::~Fixed() {
	std::cout << "\e[0;31mDestructor called of Fixed\e[0m" << std::endl;
}


// Operators
Fixed & Fixed::operator=(const Fixed &assign)
{
	if (this != &assign)
		_value = assign.getRawBits();
	std::cout << "\e[0;33mCopy assignment operator called of Fixed\e[0m" << std::endl;
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
