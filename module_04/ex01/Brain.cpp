#include "Brain.hpp"

// Constructors
Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = "Eureka " + intToString(i);
	std::cout << "\e[0;33mDefault Constructor called of Brain\e[0m" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = copy.getIdea(i);
	std::cout << "\e[0;33mCopy Constructor called of Brain\e[0m" << std::endl;
}



// Destructor
Brain::~Brain() {
	std::cout << "\e[0;31mDestructor called of Brain\e[0m" << std::endl;
}


// Operators
Brain & Brain::operator=(const Brain &assign)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = assign.getIdea(i);
	return *this;
}


// Getters / Setters
std::string Brain::getIdea(int i) const {
	return _ideas[i];
}

void Brain::setIdea(int i, std::string idea) {
	_ideas[i] = idea;
}

std::string intToString(int value) {
	std::ostringstream oss;
	oss << value;
	return oss.str();
}
