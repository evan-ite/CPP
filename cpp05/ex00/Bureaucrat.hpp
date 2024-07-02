#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{
	private:
		std::string _name;
		int _grade;

	public:
		// Constructors
		Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat(std::string name, int grade);

		// Destructor
		~Bureaucrat();

		// Operators
		Bureaucrat & operator=(const Bureaucrat &assign);

		// Getters / Setters
		std::string getName() const;
		int getGrade() const;

		void incrementGrade(void);
		void decrementGrade(void);

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
std::ostream & operator<<(std::ostream &stream, const Bureaucrat &object);

#endif
