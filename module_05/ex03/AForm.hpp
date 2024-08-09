/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evan-ite <evan-ite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:43:17 by evan-ite          #+#    #+#             */
/*   Updated: 2024/07/04 15:18:44 by evan-ite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string _name;
		bool _signed;
		const int _signGrade;
		const int _execGrade;

	public:
		// Constructors
		AForm();
		AForm(const std::string &name, const int signGrade, const int execGrade);
		AForm(const AForm &copy);

		// Destructor
		virtual ~AForm() = 0;

		// Operators
		AForm & operator=(const AForm &assign);

		// Getters / Setters
		std::string getName() const;
		bool getSigned() const;
		int getSignGrade() const;
		int getExecGrade() const;

		void BeSigned(const Bureaucrat &bureaucrat);
		virtual void execute(const Bureaucrat &executor) const;

		class FormException : public std::exception {
			public:
				virtual const char* what() const throw() = 0;
		};
		
		class GradeTooLowException : public FormException {
			public:
				const char* what() const throw() {
					return "Grade too low!";
				}
		};

		class GradeTooHighException : public FormException {
			public:
				const char* what() const throw() {
					return "Grade too high!";
				}
		};

		class NotSignedException : public FormException {
			public:
				const char* what() const throw() {
					return "Form is not signed!";
				}
		};
};

// Stream operators
std::ostream & operator<<(std::ostream &stream, const AForm &object);

#endif
