/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisevaniterson <elisevaniterson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:00:05 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/11 13:08:47 by elisevanite      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string& name): FragTrap(name + "_clap_name"), ScavTrap(name) {
	_name = name;
	FragTrap::setHitPoints(100);
	ScavTrap::setEnergy(50);
	FragTrap::setDamage(30);

	std::cout << "\e[0;33mConstructor of DiamondTrap " << name << " is called!\e[0m" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "\e[0;31mDestructor of DiamondTrap " << _name << " is called\e[0m" << std::endl;
}

void DiamondTrap::whoAmI() {
	std::cout << "I am DiamondTrap " << _name << " and " << FragTrap::getName() << std::endl;
}
