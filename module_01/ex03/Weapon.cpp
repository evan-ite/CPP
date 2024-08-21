#include "Weapon.hpp"

// Constructors
Weapon::Weapon()
{
	_type = "none";
	std::cout << "\033[0;33mDefault Constructor called of Weapon\033[0m" << std::endl;
}

Weapon::Weapon(const Weapon &copy)
{
	_type = copy.getType();
	std::cout << "\033[0;33mCopy Constructor called of Weapon\033[0m" << std::endl;
}

Weapon::Weapon(std::string type)
{
	_type = type;
	std::cout << "\033[0;33mFields Constructor called of Weapon\033[0m" << std::endl;
}


// Destructor
Weapon::~Weapon()
{
	std::cout << "\033[0;31mDestructor called of Weapon\033[0m" << std::endl;
}


// Operators
Weapon & Weapon::operator=(const Weapon &assign)
{
	_type = assign.getType();
	return *this;
}


// Getters / Setters
const std::string &Weapon::getType() const
{
	return _type;
}

void Weapon::setType(std::string new_type)
{
	_type = new_type;
}
