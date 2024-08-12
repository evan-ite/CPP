#include "Converter.hpp"

void Converter::convert(const std::string& value)
{
	

}

// Constructors
Converter::Converter()
{}

Converter::Converter(const Converter &copy)
{
	*this = copy;
}


// Destructor
Converter::~Converter()
{}


// Operators
Converter & Converter::operator=(const Converter &assign)
{
	if (this != &assign)
		*this = assign;
	return *this;
}

