/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evan-ite <evan-ite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:50:21 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/24 10:17:13 by evan-ite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void) {
	DiamondTrap boo("boo");

	std::cout << "Damage points are : " << boo.getDamage() << std::endl;
	std::cout << "Energy points are : " << boo.getEnergy() << std::endl;
	std::cout << "Hit points are : " << boo.getHitPoints() << std::endl;
	boo.attack("Joost");
	boo.whoAmI();
}
