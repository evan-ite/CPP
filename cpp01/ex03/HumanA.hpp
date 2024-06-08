#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{
	public:
		// Constructors
		HumanA(std::string name, Weapon &type);
		HumanA(const HumanA &copy);

		// Destructor
		~HumanA();

		// Operators
		HumanA & operator=(const HumanA &assign);

		// Getters / Setters
		std::string getName() const;
		Weapon getType() const;

		void attack(void) const;

	private:
		std::string _name;
		Weapon &_weaponType;

};

#endif
