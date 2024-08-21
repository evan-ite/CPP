/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evan-ite <evan-ite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:59:41 by elisevanite       #+#    #+#             */
/*   Updated: 2024/08/21 16:43:38 by evan-ite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructors
Animal::Animal() {
	_type = "Animal";
	std::cout << "\033[0;33mDefault Constructor called of Animal\033[0m" << std::endl;
}

Animal::Animal(const Animal &copy) {
	*this = copy;
	std::cout << "\033[0;33mCopy Constructor called of Animal\033[0m" << std::endl;
}

Animal::Animal(std::string type) {
	_type = type;
	std::cout << "\033[0;33mFields Constructor called of Animal\033[0m" << std::endl;
}

// Destructor
Animal::~Animal() {
	std::cout << "\033[0;31mDestructor called of Animal\033[0m" << std::endl;
}

// Operators
Animal & Animal::operator=(const Animal &assign) {
	if (this != &assign)
		_type = assign.getType();
	return *this;
}

// Getters / Setters
std::string Animal::getType() const {
	return _type;
}

void Animal::setType(std::string type) {
	_type = type;
}
