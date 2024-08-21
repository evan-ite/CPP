/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evan-ite <evan-ite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:41:56 by evan-ite          #+#    #+#             */
/*   Updated: 2024/08/21 16:43:38 by evan-ite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// Constructors
RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45), _target("default")
{
	std::srand(std::time(0));
	std::cout << "\033[0;33mDefault Constructor called of RobotomyRequestForm\033[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target): AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::srand(std::time(0));
	std::cout << "\033[0;33mField Constructor called of RobotomyRequestForm\033[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy): AForm(copy), _target("copy")
{
	std::srand(std::time(0));
	std::cout << "\033[0;33mCopy Constructor called of RobotomyRequestForm\033[0m" << std::endl;
}


// Destructor
RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "\033[0;31mDestructor called of RobotomyRequestForm\033[0m" << std::endl;
}


// Operators
RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &assign)
{
	AForm::operator=(assign);
	if (this != &assign)
		_target = assign._target;
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const 
{
	AForm::execute(executor);
	
	std::cout << "DRILLLLLLLL BABY!" << std::endl;
	if (std::rand() % 2) {
		std::cout << _target << " has been robotomized successfully." << std::endl;
	} else {
		std::cout << "The robotomy on " << _target << " failed." << std::endl;
	}
}
