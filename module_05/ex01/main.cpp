/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evan-ite <evan-ite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 20:41:35 by elisevanite       #+#    #+#             */
/*   Updated: 2024/07/04 15:05:07 by evan-ite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main (void)
{
	try {
		Bureaucrat bureaucrat("Queen", 10);
		Form form("form", 1, 1);

		bureaucrat.signForm(form);
		std::cout << form;
	} catch(Form::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
