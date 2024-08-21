/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evan-ite <evan-ite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:17:17 by elisevanite       #+#    #+#             */
/*   Updated: 2024/08/21 16:43:38 by evan-ite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << "\033[0;33mDefault Constructor called of Cure\033[0m" << std::endl;
}

Cure::Cure(const Cure &copy) : AMateria(copy) {
	std::cout << "\033[0;33mCopy Constructor called of Cure\033[0m" << std::endl;
}

Cure::Cure(std::string const type) : AMateria(type) {
	std::cout << "\033[0;33mDefault Constructor called of Cure\033[0m" << std::endl;
}

Cure::~Cure() {
	std::cout << "\033[0;31mDestructor called of Cure\033[0m" << std::endl;
}

Cure & Cure::operator=(const Cure &assign) {
	AMateria::operator=(assign);
	return *this;
}

Cure* Cure::clone() const {
	Cure *newCure = new Cure("cure");
	return newCure;
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
