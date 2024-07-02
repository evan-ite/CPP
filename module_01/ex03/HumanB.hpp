#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
	public:
		// Constructors
		HumanB(const HumanB &copy);
		HumanB(std::string name);

		// Destructor
		~HumanB();

		// Operators
		HumanB & operator=(const HumanB &assign);

		// Getters / Setters
		std::string getName() const;
		Weapon getType() const;
		void setWeapon(Weapon &type);

		void attack(void) const;

	private:
		std::string _name;
		Weapon *_weaponType;

};

#endif
