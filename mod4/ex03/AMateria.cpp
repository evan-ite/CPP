/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evan-ite <evan-ite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:17:34 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/24 15:00:54 by evan-ite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// Constructors
AMateria::AMateria() {
	_type = "";
	std::cout << "\e[0;33mDefault Constructor called of AMateria\e[0m" << std::endl;
}

AMateria::AMateria(const AMateria &copy) {
	_type = copy.getType();
	std::cout << "\e[0;33mCopy Constructor called of AMateria\e[0m" << std::endl;
}

AMateria::~AMateria() {
	std::cout << "\e[0;31mDestructor called of AMateria\e[0m" << std::endl;
}

AMateria::AMateria(std::string const type) {
	_type = type;
	std::cout << "\e[0;33mFields Constructor called of AMateria\e[0m" << std::endl;
}


// Operators
AMateria & AMateria::operator=(const AMateria &assign) {
	_type = assign.getType();
	return *this;
}


// Getters / Setters
std::string const &AMateria::getType() const {
	return _type;
}

