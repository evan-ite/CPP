/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisevaniterson <elisevaniterson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:02:59 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/11 11:17:55 by elisevanite      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	public:
		// Constructors
		ClapTrap(std::string name);
		ClapTrap(std::string name, int hit, int energy, int damage);
		ClapTrap(const ClapTrap &copy);

		// Destructor
		~ClapTrap();

		// Operators
		ClapTrap & operator=(const ClapTrap &assign);

		// Getters / Setters
		std::string getName() const;
		int getHitPoints() const;
		int getEnergy() const;
		int getDamage() const;
		void setEnergy(int newEnergy);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	private:
		std::string _name;
		int _hitPoints;
		int _energy;
		int _damage;

};

// Stream operators
std::ostream & operator<<(std::ostream &stream, const ClapTrap &object);

#endif
