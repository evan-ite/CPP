#include "Harl.hpp"

// Constructors
Harl::Harl() {}

Harl::Harl(const Harl &copy) {
	(void) copy;
}


// Destructor
Harl::~Harl() {}


// Operators
Harl & Harl::operator=(const Harl &assign) {
	(void) assign;
	return *this;
}

// Member functions
void Harl::debug( void ) {
	std::cout << "I love having extra bacon for my" <<
	"7XL-double-cheese-triple-pickle-specialketchup burger." <<
	"I really do!" << std::endl;
}

void Harl::info( void ){
	std::cout << "I cannot believe adding extra bacon costs more money. " <<
	"You didn’t put enough bacon in my burger! If you did, " <<
	"I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void ){
	std::cout << "I think I deserve to have some extra bacon for free. " <<
	"I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void ){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level ){
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*funcs[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	int i = 0;
	while (i < 4 && levels[i].compare(level))
		i++;
	if (i < 4)
		(this->*funcs[i])();
	return ;
}


