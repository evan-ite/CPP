/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisevaniterson <elisevaniterson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:59:28 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/13 14:10:49 by elisevanite      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructors
Dog::Dog() : Animal("Dog") {
	std::cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << std::endl;
}

// Destructor
Dog::~Dog() {
	std::cout << "\e[0;31mDestructor called of Dog\e[0m" << std::endl;
}


// Member functions
void Dog::makeSound(void) const {
	std::cout << "Woof" << std::endl;
}
