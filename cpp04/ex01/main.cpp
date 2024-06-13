/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisevaniterson <elisevaniterson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 11:01:14 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/13 15:31:48 by elisevanite      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
{
	Animal jaapie;
	Cat poes;
	Dog hond;

	jaapie.makeSound();
	poes.makeSound();
	hond.makeSound();
}
{
	const Animal* meta = new Animal();
	const Animal* doggy = new Dog();
	Animal* kitty = new Cat();
	kitty->makeSound();
	doggy->makeSound();
	meta->makeSound();
	std::cout << doggy->getType() << "'s idea " << doggy->getIdea(1) << std::endl;
	std::cout << kitty->getType() << "'s idea " << kitty->getIdea(2) << std::endl;

	Animal copycat = Animal(*kitty);
	kitty->setIdea(1, "Hello Baby");
	std::cout << copycat.getType() << "'s idea " << copycat.getIdea(1) << std::endl;


	delete meta;
	delete doggy;
	delete kitty;
}

	return 0;
}

