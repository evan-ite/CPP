/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evan-ite <evan-ite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:17:17 by elisevanite       #+#    #+#             */
/*   Updated: 2024/08/21 16:43:38 by evan-ite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "\033[0;33mDefault Constructor called of Ice\033[0m" << std::endl;
}

Ice::Ice(const Ice &copy) : AMateria(copy) {
	std::cout << "\033[0;33mCopy Constructor called of Ice\033[0m" << std::endl;
}

Ice::Ice(std::string const type) : AMateria(type) {
	std::cout << "\033[0;33mDefault Constructor called of Ice\033[0m" << std::endl;
}

Ice::~Ice() {
	std::cout << "\033[0;31mDestructor called of Ice\033[0m" << std::endl;
}

Ice & Ice::operator=(const Ice &assign) {
	AMateria::operator=(assign);
	return *this;
}

Ice* Ice::clone() const {
	Ice *newIce = new Ice("ice");
	return newIce;
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
