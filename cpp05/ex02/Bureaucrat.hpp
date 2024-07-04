/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evan-ite <evan-ite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:43:27 by evan-ite          #+#    #+#             */
/*   Updated: 2024/07/04 15:21:37 by evan-ite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		std::string _name;
		int _grade;

	public:
		// Constructors
		Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat(const std::string &name, int grade);

		// Destructor
		~Bureaucrat();

		// Operators
		Bureaucrat & operator=(const Bureaucrat &assign);

		// Getters / Setters
		std::string getName() const;
		int getGrade() const;

		void incrementGrade(void);
		void decrementGrade(void);
		void signForm(AForm &form) const;
		void executeForm(AForm const &form);

		class GradeException : public std::exception {
			public:
				virtual const char* what() const throw() = 0;
		};
		
		class GradeTooHighException : public GradeException {
			public:
				const char* what() const throw() {
					return "Grade too high!";
				}
		};

		class GradeTooLowException : public GradeException {
			public:
				const char* what() const throw() {
					return "Grade too low!";
				}
		};
};

// Stream operators
std::ostream & operator<<(std::ostream &stream, const Bureaucrat &object);

#endif
