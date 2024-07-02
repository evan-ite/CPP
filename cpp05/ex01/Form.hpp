#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string _name;
		bool _signed;
		int _signGrade;
		int _execGrade;

	public:
		// Constructors
		Form(std::string name, const int signGrade, const int execGrade);
		Form(const Form &copy);

		// Destructor
		~Form();

		// Operators
		Form & operator=(const Form &assign);

		// Getters / Setters
		std::string getName() const;
		bool getSigned() const;
		int getSignGrade() const;
		int getExecGrade() const;

		void BeSigned(const Bureaucrat &bureaucrat);

		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw() {
					return "Grade too high!";
				}
		};

		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw() {
					return "Grade too low!";
				}
		};
};

// Stream operators
std::ostream & operator<<(std::ostream &stream, const Form &object);

#endif
