/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evan-ite <evan-ite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:59:28 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/24 14:09:01 by evan-ite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructors
Cat::Cat() : Animal("Cat") {
	_brain = new Brain();
	std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
}

Cat::Cat(const Cat &copy) {
	std::cout << "\e[0;33mCopy Constructor called of Cat\e[0m" << std::endl;
	if (this != &copy) {
		setType(copy.getType());
		_brain = new Brain(*(copy.getBrain()));
	}
}

// Destructor
Cat::~Cat() {
	delete _brain;
	std::cout << "\e[0;31mDestructor called of Cat\e[0m" << std::endl;
}


// Operators
Cat& Cat::operator=(const Cat &assign) {
	std::cout << "\e[0;33mAssignment operator called of Cat\e[0m" << std::endl;
	if (this != &assign) {
		Animal::operator=(assign);
		delete _brain;
		_brain = new Brain(*(assign.getBrain()));
	}
	return *this;
}

// Getters & Setters
std::string Cat::getIdea(int i) const {
	return _brain->getIdea(i);
}

void Cat::setIdea(int i, std::string idea) {
	_brain->setIdea(i, idea);
}

Brain *Cat::getBrain(void) const {
	return _brain;
}


// Member functions
void Cat::makeSound(void) const {
	std::cout << "Meow" << std::endl;
}

