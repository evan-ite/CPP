/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisevaniterson <elisevaniterson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:50:21 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/11 11:03:07 by elisevanite      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap joost("joost");
	ClapTrap boo("boo");

	joost.attack("boo");
	boo.takeDamage(5);
	boo.attack("Joost");
	joost.takeDamage(9);
	boo.beRepaired(2);
	joost.attack("boo");
	boo.takeDamage(11);

}
