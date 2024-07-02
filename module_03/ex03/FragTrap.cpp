/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisevaniterson <elisevaniterson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:48:14 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/11 11:51:21 by elisevanite      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name): ClapTrap(name, 100, 100, 30) {
	std::cout << "\e[0;33mConstructor of FragTrap " << name << " is called!\e[0m" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "\e[0;31mDestructor of FragTrap " << getName() << " is called\e[0m" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "Hi Queen!<3, gimme a high five :P" << std::endl;
}
