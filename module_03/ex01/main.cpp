/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisevaniterson <elisevaniterson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:50:21 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/11 11:27:41 by elisevanite      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	ScavTrap boo("boo");

	boo.takeDamage(5);
	boo.attack("Joost");
	boo.beRepaired(2);
	boo.takeDamage(11);
	boo.guardGate();
}
