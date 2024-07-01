/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisevaniterson <elisevaniterson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:59:41 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/14 12:01:14 by elisevanite      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructors
Animal::Animal()
{
	_type = "Animal";
	std::cout << "\e[0;33mDefault Constructor called of Animal\e[0m" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Animal\e[0m" << std::endl;
}

Animal::Animal(std::string type)
{
	_type = type;
	std::cout << "\e[0;33mFields Constructor called of Animal\e[0m" << std::endl;
}


// Destructor
Animal::~Animal()
{
	std::cout << "\e[0;31mDestructor called of Animal\e[0m" << std::endl;
}


// Operators
Animal & Animal::operator=(const Animal &assign)
{
	_type = assign.getType();
	return *this;
}


// Getters / Setters
std::string Animal::getType() const
{
	return _type;
}

// Member functions
void Animal::makeSound(void) const {
	std::cout << "Animal sound" << std::endl;
}

std::string Animal::getIdea(int i) const {
	(void)i;
	return NULL;
}

void Animal::setIdea(int i, std::string idea) {
	(void)i;
	(void)idea;
	return ;
}

void Animal::setType(std::string type) {
	_type = type;
}
