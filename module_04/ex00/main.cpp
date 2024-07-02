/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evan-ite <evan-ite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 11:01:14 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/24 13:43:32 by evan-ite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void) {
	const Animal* meta = new Animal();
	const Animal* doggy = new Dog();
	const Animal* kitty = new Cat();
	std::cout << "Type is " << doggy->getType() << " " << std::endl;
	std::cout << "Type is " << kitty->getType() << " " << std::endl;
	kitty->makeSound();
	doggy->makeSound();
	meta->makeSound();

	delete meta;
	delete doggy;
	delete kitty;

	return 0;
}

