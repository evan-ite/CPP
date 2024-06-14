/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisevaniterson <elisevaniterson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:59:28 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/14 12:01:36 by elisevanite      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructors
Cat::Cat() : Animal("Cat") {
	_brain = new Brain();
	std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
}

Cat::Cat(const Cat &copy) {
	setType(copy.getType());
	_brain = new Brain(*(copy.getBrain()));
	std::cout << "\e[0;33mCopy Constructor called of Cat\e[0m" << std::endl;
}

// Destructor
Cat::~Cat() {
	delete _brain;
	std::cout << "\e[0;31mDestructor called of Cat\e[0m" << std::endl;
}


// Member functions
void Cat::makeSound(void) const {
	std::cout << "Meow" << std::endl;
}

std::string Cat::getIdea(int i) const {
	return _brain->getIdea(i);
}

void Cat::setIdea(int i, std::string idea) {
	_brain->setIdea(i, idea);
}

Brain *Cat::getBrain(void) const {
	return _brain;
}
