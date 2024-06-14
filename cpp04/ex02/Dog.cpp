/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisevaniterson <elisevaniterson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:59:28 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/13 15:28:14 by elisevanite      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructors
Dog::Dog() : Animal("Dog") {
	_brain = new Brain();
	std::cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << std::endl;
}

Dog::Dog(const Dog &copy) {
	_brain = new Brain(*(copy.getBrain()));
	std::cout << "\e[0;33mCopy Constructor called of Cat\e[0m" << std::endl;
}

// Destructor
Dog::~Dog() {
	delete _brain;
	std::cout << "\e[0;31mDestructor called of Dog\e[0m" << std::endl;
}


// Member functions
void Dog::makeSound(void) const {
	std::cout << "Woof" << std::endl;
}

std::string Dog::getIdea(int i) const {
	return (*_brain).getIdea(i);
}

void Dog::setIdea(int i, std::string idea) {
	_brain->setIdea(i, idea);
}

Brain *Dog::getBrain(void) const {
	return _brain;
}
