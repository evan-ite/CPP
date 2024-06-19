#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		// Constructors
		MateriaSource();
		MateriaSource(const MateriaSource &copy);

		// Destructor
		~MateriaSource();

		// Operators
		MateriaSource & operator=(const MateriaSource &assign);

		// Getters / Setters
		AMateria * getStorage(int i) const;

		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);

	private:
		AMateria * _storage[4];

};

#endif
