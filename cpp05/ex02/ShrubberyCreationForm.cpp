/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evan-ite <evan-ite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:43:41 by evan-ite          #+#    #+#             */
/*   Updated: 2024/07/04 15:42:27 by evan-ite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// Constructors
ShrubberyCreationForm::ShrubberyCreationForm(): 
	AForm("ShrubberyCreationForm", 145, 137),
	_target("default")
{
	std::cout << "\e[0;33mDefault Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): 
	AForm("ShrubberyCreationForm", 145, 137),
	_target(target)
{
	std::cout << "\e[0;33mField Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy): 
	AForm(copy),
	_target("copy")
{
	std::cout << "\e[0;33mCopy Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}


// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "\e[0;31mDestructor called of ShrubberyCreationForm\e[0m" << std::endl;
}


// Operators
ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign)
{
	AForm::operator=(assign);
	if (this != &assign)
		_target = assign._target;
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const 
{
	AForm::execute(executor);
	
	std::ofstream ofs((_target + "_shrubbery").c_str());
	if (!ofs.is_open()) {
		std::cerr << "Failed to create the file." << std::endl;
		return;
	}

	ofs << "       _-_\n";
	ofs << "    /~~   ~~\\\n";
	ofs << " /~~         ~~\\\n";
	ofs << "{               }\n";
	ofs << " \\  _-     -_  /\n";
	ofs << "   ~  \\\\ //  ~\n";
	ofs << "_- -   | | _- _\n";
	ofs << "  _ -  | |   -_\n";
	ofs << "      // \\\\\n";

	ofs.close();

	std::cout << _target << "_shrubbery is created!" << std::endl;
}
