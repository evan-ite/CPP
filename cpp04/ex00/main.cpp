/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisevaniterson <elisevaniterson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 11:01:14 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/13 14:39:56 by elisevanite      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void) {
	Animal jaapie;
	Cat poes;
	Dog hond;

	jaapie.makeSound();
	poes.makeSound();
	hond.makeSound();
	jaapie = Animal(poes);
	jaapie.makeSound();

	const Animal* meta = new Animal();
	const Animal* doggy = new Dog();
	const WrongAnimal* kitty = new WrongCat();
	std::cout << doggy->getType() << " " << std::endl;
	std::cout << kitty->getType() << " " << std::endl;
	kitty->makeSound();
	doggy->makeSound();
	meta->makeSound();

	delete meta;
	delete doggy;
	delete kitty;

	return 0;
}

