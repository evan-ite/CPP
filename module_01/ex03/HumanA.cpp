#include "HumanA.hpp"

// Constructors
HumanA::HumanA(std::string name, Weapon &type) : _name(name), _weaponType(type)
{
	std::cout << "\033[0;33mFields Constructor called of HumanA\033[0m" << std::endl;
}
HumanA::HumanA(const HumanA &copy) : _name(copy._name), _weaponType(copy._weaponType)
{
	std::cout << "\033[0;33mCopy Constructor called of HumanA\033[0m" << std::endl;
}

// Destructor
HumanA::~HumanA()
{
	std::cout << "\033[0;31mDestructor called of HumanA\033[0m" << std::endl;
}


// Operators
HumanA & HumanA::operator=(const HumanA &assign)
{
	_name = assign.getName();
	_weaponType = assign.getType();
	return *this;
}


// Getters / Setters
std::string HumanA::getName() const
{
	return _name;
}
Weapon HumanA::getType() const
{
	return _weaponType;
}

void HumanA::attack(void) const
{
	std::cout << _name << " attacks with thier " << _weaponType.getType() << std::endl;
}
