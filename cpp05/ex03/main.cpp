/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evan-ite <evan-ite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 20:41:35 by elisevanite       #+#    #+#             */
/*   Updated: 2024/07/04 16:35:24 by evan-ite         ###   ########.fr       */
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
			Bureaucrat bureaucrat("Queen", 15);
			Intern intern;
			
			AForm *shrub = intern.makeForm("ShrubberyCreationForm", "bro");
			
			bureaucrat.signForm(*shrub);
			bureaucrat.executeForm(*shrub);
			delete shrub;
		} catch (AForm::FormException &e) {
			std::cout << e.what() << std::endl;
		} catch (Bureaucrat::GradeException &e) {
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}
