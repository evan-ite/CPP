/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evan-ite <evan-ite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 20:41:35 by elisevanite       #+#    #+#             */
/*   Updated: 2024/08/09 11:35:46 by evan-ite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main (void)
{
	{
		std::cout << "--------- Shrubbery ----------" << std::endl;
		try {
			Bureaucrat bureaucrat("Queen", 145);
			ShrubberyCreationForm shrub("cute");
			
			bureaucrat.signForm(shrub);
			bureaucrat.executeForm(shrub);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "--------- Robotomy ----------" << std::endl;
		try {
			Bureaucrat bureaucrat("Queen", 10);
			RobotomyRequestForm rob("cuter");
			
			bureaucrat.signForm(rob);
			bureaucrat.executeForm(rob);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "--------- Presidential ----------" << std::endl;
		try {
			Bureaucrat bureaucrat("Queen", 6);
			PresidentialPardonForm pres("cutest");
			
			bureaucrat.incrementGrade();
			bureaucrat.signForm(pres);
			bureaucrat.executeForm(pres);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}
