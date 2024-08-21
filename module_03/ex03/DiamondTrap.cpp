/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evan-ite <evan-ite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:00:05 by elisevanite       #+#    #+#             */
/*   Updated: 2024/08/21 16:43:38 by evan-ite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string& name)
: ClapTrap(name + "_clap_name", 100, 50, 30),
  FragTrap(name),
  ScavTrap(name),
  _name(name) {
	_hitPoints = FragTrap::_hitPoints;
	_energy = ScavTrap::_energy;
	_damage = FragTrap::_damage;

	std::cout << "\033[0;33mConstructor of DiamondTrap " << name << " is called!\033[0m" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "\033[0;31mDestructor of DiamondTrap " << _name << " is called\033[0m" << std::endl;
}

void DiamondTrap::whoAmI(void) {
	std::cout << "I am DiamondTrap " << _name << " and " << ClapTrap::getName() << std::endl;
}

