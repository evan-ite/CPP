/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisevaniterson <elisevaniterson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:17:17 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/19 13:02:15 by elisevanite      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : _type("ice") {
	std::cout << "\e[0;33mDefault Constructor called of Ice\e[0m" << std::endl;
}

Ice::Ice(const Ice &copy) : _type(copy.getType()) {
	std::cout << "\e[0;33mCopy Constructor called of Ice\e[0m" << std::endl;
}

Ice::Ice(std::string const type) : _type(type) {
	std::cout << "\e[0;33mDefault Constructor called of Ice\e[0m" << std::endl;
}

Ice::~Ice() {
	std::cout << "\e[0;31mDestructor called of Ice\e[0m" << std::endl;
}

Ice & Ice::operator=(const Ice &assign) {
	_type = assign.getType();
	return *this;
}

Ice* Ice::clone() const {
	Ice *newIce = new Ice();
	return newIce;
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
