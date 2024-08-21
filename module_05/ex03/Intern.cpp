/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evan-ite <evan-ite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 15:49:25 by evan-ite          #+#    #+#             */
/*   Updated: 2024/08/21 16:43:38 by evan-ite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// Constructors
Intern::Intern()
{
	std::cout << "\033[0;33mDefault Constructor called of Intern\033[0m" << std::endl;
}

Intern::Intern(const Intern &copy)
{
	(void)copy;
	std::cout << "\033[0;33mCopy Constructor called of Intern\033[0m" << std::endl;
}


// Destructor
Intern::~Intern()
{
	std::cout << "\033[0;31mDestructor called of Intern\033[0m" << std::endl;
}


// Operators
Intern & Intern::operator=(const Intern &assign)
{
	(void) assign;
	return *this;
}

AForm *Intern::createShrub(std::string const &target) 
{
	return new ShrubberyCreationForm(target);
}

AForm *Intern::createRob(std::string const &target) 
{
	return new RobotomyRequestForm(target);
}

AForm *Intern::createPres(std::string const &target) 
{
	return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(std::string const &formName, std::string const &target) 
{
	std::string formTypes[3] = {"ShrubberyCreationForm", "PresidentialPardonForm", "RobotomyRequestForm"};
	AForm* (Intern::*formFuncs[3])(std::string const &) = {&Intern::createShrub, &Intern::createPres, &Intern::createRob};
	
	for (int i = 0; i < 3; i++) {
		if (formTypes[i] == formName) {
			std::cout << "Intern creates " << formName << std::endl;	
			return (this->*formFuncs[i])(target);
		}
	}
	throw std::runtime_error("Form type does not exist...");
}
