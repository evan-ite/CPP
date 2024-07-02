/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisevaniterson <elisevaniterson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 14:34:03 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/08 14:39:52 by elisevanite      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl harl;
	std::string input;

	std::cout << "Possible levels are; DEBUG, INFO, WARNING, ERROR" << std::endl;
	do {
		std::cout << "Enter level: ";
		std::getline(std::cin, input);
		harl.complain(input);
	} while (input.compare("exit"));
	return 0;
}
