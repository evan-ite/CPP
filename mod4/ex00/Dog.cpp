/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evan-ite <evan-ite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:59:28 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/24 13:36:53 by evan-ite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructors
Dog::Dog() : Animal("Dog") {
	std::cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy) {
	std::cout << "\e[0;33mCopy Constructor called of Dog\e[0m" << std::endl;
}

// Destructor
Dog::~Dog() {
	std::cout << "\e[0;31mDestructor called of Dog\e[0m" << std::endl;
}

Dog& Dog::operator=(const Dog &assign) {
	Animal::operator=(assign);
	return *this;
}


// Member functions
void Dog::makeSound(void) const {
	std::cout << "Woof" << std::endl;
}
