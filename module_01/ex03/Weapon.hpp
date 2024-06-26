#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
	public:
		// Constructors
		Weapon();
		Weapon(const Weapon &copy);
		Weapon(std::string type);

		// Destructor
		~Weapon();

		// Operators
		Weapon				&operator=(const Weapon &assign);

		// Getters / Setters
		const std::string	&getType() const;
		void				setType(std::string new_type);

	private:
		std::string			_type;

};

#endif
