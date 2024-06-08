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
	std::cout << "[ DEBUG ]\n" <<
	"I love having extra bacon for my" <<
	"7XL-double-cheese-triple-pickle-specialketchup burger." <<
	"I really do!" << std::endl;
}

void Harl::info( void ){
	std::cout << "[ INFO ]\n" <<
	"I cannot believe adding extra bacon costs more money. " <<
	"You didn’t put enough bacon in my burger! If you did, " <<
	"I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void ){
	std::cout << "[ WARNING ]\n" <<
	"I think I deserve to have some extra bacon for free. " <<
	"I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void ){
	std::cout << "[ ERROR ]\n" <<
	"This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level ){
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i = 0;
	while (i < 4 && levels[i].compare(level))
		i++;

	switch (i)
	{
	case 0:
		this->debug();
	case 1:
		this->info();
	case 2:
		this->warning();
	case 3:
		this->error();
		break ;
	default:
		std::cerr << "Level does not exist" << std::endl;
		break;
	}
}


