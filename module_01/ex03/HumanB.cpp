#include "HumanB.hpp"

// Constructors
HumanB::HumanB(std::string name) : _name(name)
{
	_weaponType = NULL;
	std::cout << "\033[0;33mFields Constructor called of HumanB\033[0m" << std::endl;
}

HumanB::HumanB(const HumanB &copy) : _name(copy._name)
{
	*_weaponType = copy.getType();
	std::cout << "\033[0;33mCopy Constructor called of HumanB\033[0m" << std::endl;
}

// Destructor
HumanB::~HumanB()
{
	std::cout << "\033[0;31mDestructor called of HumanB\033[0m" << std::endl;
}

// Operators
HumanB & HumanB::operator=(const HumanB &assign)
{
	_name = assign.getName();
	*_weaponType = assign.getType();
	return *this;
}

// Getters / Setters
std::string HumanB::getName() const
{
	return _name;
}

Weapon HumanB::getType() const
{
	return *_weaponType;
}

void HumanB::setWeapon(Weapon &type)
{
	_weaponType = &type;
}

void HumanB::attack(void) const
{
	if (this->_weaponType != NULL)
		std::cout << _name << " attacks with thier " << (*_weaponType).getType() << std::endl;
	else
		std::cout << _name << " doesn't have a weapon to attack " << std::endl;

}
