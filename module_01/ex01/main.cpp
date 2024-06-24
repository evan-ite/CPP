/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisevaniterson <elisevaniterson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:37:05 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/07 16:20:20 by elisevanite      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int N = 5;
	Zombie *horde = zombieHorde(N, "Queen");

	for (int i = 0; i < N; i++)
		horde[i].announce();

	delete [] horde;
	return (0);
}
