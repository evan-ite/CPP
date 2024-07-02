/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evan-ite <evan-ite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:50:21 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/21 15:15:06 by evan-ite         ###   ########.fr       */
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
	boo.attack("Joost");
	std::cout << boo;

}
