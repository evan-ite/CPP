#include "Form.hpp"

// Constructors
Form::Form(const Form &copy)
{
	_name = copy.getName();
	_signed = copy.getSigned();
	_signGrade = copy.getSignGrade();
	_execGrade = copy.getExecGrade();
	std::cout << "\e[0;33mCopy Constructor called of Form\e[0m" << std::endl;
}

Form::Form(std::string name, const int signGrade, const int execGrade)
{
	if (signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
	_name = name;
	_signed = false;
	_signGrade = signGrade;
	_execGrade = execGrade;
	std::cout << "\e[0;33mFields Constructor called of Form\e[0m" << std::endl;
}


// Destructor
Form::~Form()
{
	std::cout << "\e[0;31mDestructor called of Form\e[0m" << std::endl;
}


// Operators
Form & Form::operator=(const Form &assign)
{
	_name = assign.getName();
	_signed = assign.getSigned();
	_signGrade = assign.getSignGrade();
	_execGrade = assign.getExecGrade();
	return *this;
}


// Getters / Setters
std::string Form::getName() const
{
	return _name;
}
bool Form::getSigned() const
{
	return _signed;
}
int Form::getSignGrade() const
{
	return _signGrade;
}
int Form::getExecGrade() const
{
	return _execGrade;
}

void Form::BeSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > _signGrade)
		throw Form::GradeTooLowException();
	_signed = true;
}


// Stream operators
std::ostream & operator<<(std::ostream &stream, const Form &object)
{
	stream << "Form " << object.getName() << ", signed: " << object.getSigned() << ", grade to sign " << object.getSignGrade() << " and grade to execute " << object.getExecGrade() << "." << std::endl;
	return stream;
}
