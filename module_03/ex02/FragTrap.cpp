/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evan-ite <evan-ite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:48:14 by elisevanite       #+#    #+#             */
/*   Updated: 2024/08/21 16:43:38 by evan-ite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name): ClapTrap(name, 100, 100, 30) {
	std::cout << "\033[0;33mConstructor of FragTrap " << name << " is called!\033[0m" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "\033[0;31mDestructor of FragTrap " << getName() << " is called\033[0m" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "Hi Queen!<3, gimme a high five :P" << std::endl;
}
