/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evan-ite <evan-ite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:17:34 by elisevanite       #+#    #+#             */
/*   Updated: 2024/08/21 16:43:38 by evan-ite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// Constructors
AMateria::AMateria() {
	_type = "";
	std::cout << "\033[0;33mDefault Constructor called of AMateria\033[0m" << std::endl;
}

AMateria::AMateria(const AMateria &copy) {
	_type = copy.getType();
	std::cout << "\033[0;33mCopy Constructor called of AMateria\033[0m" << std::endl;
}

AMateria::~AMateria() {
	std::cout << "\033[0;31mDestructor called of AMateria\033[0m" << std::endl;
}

AMateria::AMateria(std::string const type) {
	_type = type;
	std::cout << "\033[0;33mFields Constructor called of AMateria\033[0m" << std::endl;
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

