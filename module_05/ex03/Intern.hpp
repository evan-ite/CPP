/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evan-ite <evan-ite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 15:49:27 by evan-ite          #+#    #+#             */
/*   Updated: 2024/07/04 16:34:30 by evan-ite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"


class Intern
{
	public:
		// Constructors
		Intern();
		Intern(const Intern &copy);
		
		// Destructor
		~Intern();
		
		// Operators
		Intern & operator=(const Intern &assign);
		
		AForm *makeForm(std::string const &formName, std::string const &target);
		
	private:
		AForm *createPres(std::string const &target);
		AForm *createShrub(std::string const &target);
		AForm *createRob(std::string const &target); 
		
};

#endif