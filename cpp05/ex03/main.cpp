/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evan-ite <evan-ite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 20:41:35 by elisevanite       #+#    #+#             */
/*   Updated: 2024/08/09 11:43:48 by evan-ite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main (void)
{
	{
		std::cout << "--------- Intern ----------" << std::endl;
		try {
			Bureaucrat bureaucrat("Queen", 150);
			Intern intern;
			
			// AForm *form = intern.makeForm("ShrubberyCreationForm", "bro");
			// AForm *form = intern.makeForm("RobotomyRequestForm", "bro");
			AForm *form = intern.makeForm("PresidentialPardonForm", "bro");

			bureaucrat.signForm(*form);
			bureaucrat.executeForm(*form);
			delete form;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}
