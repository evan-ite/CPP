/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisevaniterson <elisevaniterson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:59:28 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/13 14:08:01 by elisevanite      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructors
Cat::Cat() : Animal("Cat") {
	std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
}

// Destructor
Cat::~Cat() {
	std::cout << "\e[0;31mDestructor called of Cat\e[0m" << std::endl;
}


// Member functions
void Cat::makeSound(void) const {
	std::cout << "Meow" << std::endl;
}
