/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evan-ite <evan-ite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:59:28 by elisevanite       #+#    #+#             */
/*   Updated: 2024/08/21 16:43:38 by evan-ite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructors
Cat::Cat() : Animal("Cat") {
	std::cout << "\033[0;33mDefault Constructor called of Cat\033[0m" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy) {
	std::cout << "\033[0;33mCopy Constructor called of Cat\033[0m" << std::endl;
}

// Destructor
Cat::~Cat() {
	std::cout << "\033[0;31mDestructor called of Cat\033[0m" << std::endl;
}

Cat& Cat::operator=(const Cat &assign) {
	Animal::operator=(assign);
	return *this;
}


// Member functions
void Cat::makeSound(void) const {
	std::cout << "Meow" << std::endl;
}
