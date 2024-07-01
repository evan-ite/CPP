/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisevaniterson <elisevaniterson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:59:28 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/13 14:08:01 by elisevanite      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Constructors
WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "\e[0;33mDefault Constructor called of WrongCat\e[0m" << std::endl;
}

// Destructor
WrongCat::~WrongCat() {
	std::cout << "\e[0;31mDestructor called of WrongCat\e[0m" << std::endl;
}


// Member functions
void WrongCat::makeSound(void) const {
	std::cout << "Meow" << std::endl;
}
