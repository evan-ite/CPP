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

		void	announce(void) const;

	private:
		std::string _name;

};

// Stream operators
std::ostream & operator<<(std::ostream &stream, const Zombie &object);

Zombie	*newZombie(std::string name);
void randomChump(std::string name);

#endif
