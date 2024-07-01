/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evan-ite <evan-ite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 11:01:14 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/24 14:12:29 by evan-ite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
	Cat poes;

	Cat copycat(poes);
	const Animal* copycat2 = new Cat(poes);
	
	poes.setIdea(0, "nice bro");

	std::cout << poes.getType() << "'s idea " << poes.getIdea(0) << std::endl;
	std::cout << copycat.getType() << "'s idea " << copycat.getIdea(0) << std::endl;
	std::cout << copycat2->getType() << "'s idea " << copycat2->getIdea(0) << std::endl;

	delete copycat2;
	return 0;
}

