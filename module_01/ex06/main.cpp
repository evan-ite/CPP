/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisevaniterson <elisevaniterson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 14:34:03 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/08 14:53:51 by elisevanite      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl harl;

	if (argc != 2) {
		std::cerr << "./harlFilter [level]" << std::endl;
		return 1;
	}
	harl.complain(argv[1]);
	return 0;
}
