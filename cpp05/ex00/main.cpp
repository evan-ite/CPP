/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisevaniterson <elisevaniterson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 20:41:35 by elisevanite       #+#    #+#             */
/*   Updated: 2024/07/02 21:18:31 by elisevanite      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void)
{
	try {
		Bureaucrat bureaucrat("Queen", 2);
		// Bureaucrat bureaucrat("Queen", 160);

		std::cout << bureaucrat << std::endl;

		bureaucrat.incrementGrade();
		// bureaucrat.decrementGrade();

		std::cout << bureaucrat << std::endl;

	} catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
	} catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
	}
	return EXIT_SUCCESS;
}
