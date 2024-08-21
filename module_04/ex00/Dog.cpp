/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evan-ite <evan-ite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:59:28 by elisevanite       #+#    #+#             */
/*   Updated: 2024/08/21 16:43:38 by evan-ite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructors
Dog::Dog() : Animal("Dog") {
	std::cout << "\033[0;33mDefault Constructor called of Dog\033[0m" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy) {
	std::cout << "\033[0;33mCopy Constructor called of Dog\033[0m" << std::endl;
}

// Destructor
Dog::~Dog() {
	std::cout << "\033[0;31mDestructor called of Dog\033[0m" << std::endl;
}

Dog& Dog::operator=(const Dog &assign) {
	Animal::operator=(assign);
	return *this;
}


// Member functions
void Dog::makeSound(void) const {
	std::cout << "Woof" << std::endl;
}
