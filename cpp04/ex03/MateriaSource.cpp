#include "MateriaSource.hpp"

// Constructors
MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_storage[i] = NULL;
	std::cout << "\e[0;33mDefault Constructor called of MateriaSource\e[0m" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	for (int i = 0; i < 4; i++)
		_storage[i] = copy.getStorage(i);
	std::cout << "\e[0;33mCopy Constructor called of MateriaSource\e[0m" << std::endl;
}

// Destructor
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete _storage[i];
	std::cout << "\e[0;31mDestructor called of MateriaSource\e[0m" << std::endl;
}


// Operators
MateriaSource & MateriaSource::operator=(const MateriaSource &assign)
{
	for (int i = 0; i < 4; i++)
		_storage[i] = assign.getStorage(i);
	return *this;
}


// Getters / Setters
AMateria * MateriaSource::getStorage(int i) const
{
	return _storage[i];
}

void MateriaSource::learnMateria(AMateria* m) {
	static int i = 0;

	if (_storage[i % 4] == NULL)
		_storage[i % 4] = m;
	i++;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	if (type.compare("ice") && type.compare("cure")) {
		std::cerr << "Type not recognized" << std::endl;
		return NULL;
	}

	for (int i = 3; i >= 0; i--) {
		if (_storage[i] && _storage[i]->getType().compare(type)) {
			AMateria *newMateria = (*_storage[i]).clone();
			return newMateria;
		}
	}
	return NULL;
}
