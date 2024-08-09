/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evan-ite <evan-ite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 20:41:35 by elisevanite       #+#    #+#             */
/*   Updated: 2024/08/09 11:05:38 by evan-ite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void)
{
	try {
		// Bureaucrat bureaucrat("Queen", 2);
		Bureaucrat bureaucrat("Queen", 150);

		std::cout << bureaucrat << std::endl;

		// bureaucrat.incrementGrade();
		bureaucrat.decrementGrade();

		std::cout << bureaucrat << std::endl;

	} catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
	} catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
