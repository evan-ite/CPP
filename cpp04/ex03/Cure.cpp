/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisevaniterson <elisevaniterson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:17:17 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/19 13:02:59 by elisevanite      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : _type("cure") {
	std::cout << "\e[0;33mDefault Constructor called of Cure\e[0m" << std::endl;
}

Cure::Cure(const Cure &copy) : _type(copy.getType()) {
	std::cout << "\e[0;33mCopy Constructor called of Cure\e[0m" << std::endl;
}

Cure::Cure(std::string const type) : _type(type) {
	std::cout << "\e[0;33mDefault Constructor called of Cure\e[0m" << std::endl;
}

Cure::~Cure() {
	std::cout << "\e[0;31mDestructor called of Cure\e[0m" << std::endl;
}

Cure & Cure::operator=(const Cure &assign) {
	_type = assign.getType();
	return *this;
}

Cure* Cure::clone() const {
	Cure *newCure = new Cure();
	return newCure;
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
