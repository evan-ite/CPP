/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisevaniterson <elisevaniterson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:02:42 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/11 11:25:26 by elisevanite      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name, 100, 50, 20) {
	std::cout << "\e[0;33mConstructor of ScavTrap " << name << " is called!\e[0m" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "\e[0;31mDestructor of ScavTrap " << getName() << " is called\e[0m" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (!getEnergy() || !getHitPoints()) {
		std::cout << "ScavTrap " << getName() << " doesn't have any energy/hitpoints left..." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing "
	<< getDamage() << " points of damage!" << std::endl;
	setEnergy(getEnergy() - 1);
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << getName() << " is now in gatekeeper mode" << std::endl;
}
