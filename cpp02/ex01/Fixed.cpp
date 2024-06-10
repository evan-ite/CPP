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
Fixed & Fixed::operator=(const Fixed &assign)
{
	if (this != &assign)
		_value = assign.getRawBits();
	std::cout << "\e[0;33mCopy assignment operator called\e[0m" << std::endl;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
//   // Convert the fixed-point value to a floating-point representation
//   double float_value = static_cast<double>(fixed.getRawBits()) / (1 << Fixed::_fracBits);
//   // Output the floating-point value with a specific precision (e.g., 2 decimal places)
//   os << std::fixed << std::setprecision(2) << float_value;
	os << fixed.getRawBits() << Fixed::_fracBits << std::endl;
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



