#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
	public:
		// Constructors
		Harl();
		Harl(const Harl &copy);

		// Destructor
		~Harl();

		// Operators
		Harl & operator=(const Harl &assign);

		// Public member functions
		void complain( std::string level );

	private:
		// Private member functions
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

};

#endif
