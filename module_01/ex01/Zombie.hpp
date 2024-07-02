#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	public:
		// Constructors
		Zombie();
		Zombie(const Zombie &copy);
		Zombie(std::string name);

		// Destructor
		~Zombie();

		// Operators
		Zombie & operator=(const Zombie &assign);

		// Getters / Setters
		std::string getName() const;
		void setName(std::string name);

		void	announce(void) const;

	private:
		std::string _name;

};

// Stream operators
std::ostream & operator<<(std::ostream &stream, const Zombie &object);

Zombie* zombieHorde( int N, std::string name );

#endif
