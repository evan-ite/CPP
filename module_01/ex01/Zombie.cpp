#include "Zombie.hpp"

// Constructors
Zombie::Zombie()
{
	_name = "no name";
	std::cout << "\e[0;33mDefault Constructor called of Zombie " << _name << "\e[0m" << std::endl;
}

Zombie::Zombie(const Zombie &copy)
{
	_name = copy.getName();
	std::cout << "\e[0;33mCopy Constructor called of Zombie " << _name << "\e[0m" << std::endl;
}

Zombie::Zombie(std::string name)
{
	_name = name;
	std::cout << "\e[0;33mFields Constructor called of Zombie " << _name << "\e[0m" << std::endl;
}


// Destructor
Zombie::~Zombie()
{
	std::cout << "\e[0;31mDestructor called of Zombie " << _name << "\e[0m" << std::endl;
}


// Operators
Zombie & Zombie::operator=(const Zombie &assign)
{
	_name = assign.getName();
	return *this;
}


// Getters / Setters
std::string Zombie::getName() const
{
	return _name;
}

// Getters / Setters
void Zombie::setName(std::string name)
{
	_name = name;
}

void	Zombie::announce(void) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// Stream operators
std::ostream & operator<<(std::ostream &stream, const Zombie &object)
{
	stream << "Print zombie: " << object.getName() << std::endl;
	return stream;
}
