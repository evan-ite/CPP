/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evan-ite <evan-ite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:59:28 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/24 14:09:59 by evan-ite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructors
Dog::Dog() : Animal("Dog") {
	_brain = new Brain();
	std::cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << std::endl;
}

Dog::Dog(const Dog &copy) {
	std::cout << "\e[0;33mCopy Constructor called of Dog\e[0m" << std::endl;
	if (this != &copy) {
		setType(copy.getType());
		_brain = new Brain(*(copy.getBrain()));
	}
}

// Destructor
Dog::~Dog() {
	delete _brain;
	std::cout << "\e[0;31mDestructor called of Dog\e[0m" << std::endl;
}

// Operators
Dog& Dog::operator=(const Dog &assign) {
	std::cout << "\e[0;33mAssignment operator called of Dog\e[0m" << std::endl;
	if (this != &assign) {
		Animal::operator=(assign);
		delete _brain;
		_brain = new Brain(*(assign.getBrain()));
	}
	return *this;
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
