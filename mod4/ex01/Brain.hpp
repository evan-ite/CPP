#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <sstream>
# include <string>

class Brain
{
	public:
		// Constructors
		Brain();
		Brain(const Brain &copy);

		// Destructor
		~Brain();

		// Operators
		Brain & operator=(const Brain &assign);

		// Getters / Setters
		std::string	getIdea(int i) const;
		void		setIdea(int i, std::string idea);

	private:
		std::string _ideas[100];

};

std::string intToString(int value);

#endif
