/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evan-ite <evan-ite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:42:29 by evan-ite          #+#    #+#             */
/*   Updated: 2024/08/21 16:43:38 by evan-ite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// Constructors

AForm::AForm():
	_name("default"),
	_signed(false),
	_signGrade(150),
	_execGrade(150)
{}

AForm::AForm(const AForm &copy):
	_name(copy.getName()),
	_signed(copy.getSigned()),
	_signGrade(copy.getSignGrade()),
	_execGrade(copy.getExecGrade())
{
	std::cout << "\033[0;33mCopy Constructor called of AForm\033[0m" << std::endl;
}

AForm::AForm(const std::string &name, const int signGrade, const int execGrade):
	_name(name),
	_signed(false),
	_signGrade(signGrade),
	_execGrade(execGrade)
{
	if (signGrade < 1 || execGrade < 1)
		throw AForm::GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw AForm::GradeTooLowException();
	std::cout << "\033[0;33mFields Constructor called of AForm\033[0m" << std::endl;
}


// Destructor
AForm::~AForm()
{
	std::cout << "\033[0;31mDestructor called of AForm\033[0m" << std::endl;
}


// Operators
AForm & AForm::operator=(const AForm &assign)
{
	if (this != &assign)
		this->_signed = assign._signed;
	return *this;
}


// Getters / Setters
std::string AForm::getName() const
{
	return _name;
}
bool AForm::getSigned() const
{
	return _signed;
}
int AForm::getSignGrade() const
{
	return _signGrade;
}
int AForm::getExecGrade() const
{
	return _execGrade;
}

void AForm::BeSigned(const Bureaucrat &bureaucrat) 
{
	if (bureaucrat.getGrade() > _signGrade)
		throw AForm::GradeTooLowException();
	_signed = true;
}

void AForm::execute(const Bureaucrat &executor) const 
{
	std::cout << "Executing " << _name << "..." <<std::endl;
	if (executor.getGrade() > _execGrade)
		throw AForm::GradeTooLowException();
	else if (!_signed)
		throw AForm::NotSignedException();
}


// Stream operators
std::ostream & operator<<(std::ostream &stream, const AForm &object)
{
	stream << "AForm " << object.getName() << ", signed: " << object.getSigned() << ", grade to sign " << object.getSignGrade() << " and grade to execute " << object.getExecGrade() << "." << std::endl;
	return stream;
}
