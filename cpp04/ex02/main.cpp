/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisevaniterson <elisevaniterson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 11:01:14 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/14 12:15:01 by elisevanite      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
{
	Cat poes;
	Dog hond;

	poes.makeSound();
	hond.makeSound();

	Cat copycat(poes);
	poes.setIdea(0, "nice bro");
	std::cout << poes.getType() << "'s idea " << poes.getIdea(0) << std::endl;
	std::cout << copycat.getType() << "'s idea " << copycat.getIdea(0) << std::endl;

}
{
	const Animal* doggy = new Dog();
	Animal* kitty = new Cat();
	kitty->makeSound();
	doggy->makeSound();
	std::cout << doggy->getType() << "'s idea " << doggy->getIdea(1) << std::endl;
	std::cout << kitty->getType() << "'s idea " << kitty->getIdea(2) << std::endl;

	kitty->setIdea(1, "Hello Baby");
	std::cout << kitty->getType() << "'s idea " << kitty->getIdea(1) << std::endl;

	delete doggy;
	delete kitty;
}

	return 0;
}

