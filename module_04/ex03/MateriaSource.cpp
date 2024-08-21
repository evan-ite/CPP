#include "MateriaSource.hpp"

// Constructors
MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_storage[i] = NULL;
	std::cout << "\033[0;33mDefault Constructor called of MateriaSource\033[0m" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	for (int i = 0; i < 4; i++)
		_storage[i] = copy.getStorage(i);
	std::cout << "\033[0;33mCopy Constructor called of MateriaSource\033[0m" << std::endl;
}

// Destructor
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete _storage[i];
	std::cout << "\033[0;31mDestructor called of MateriaSource\033[0m" << std::endl;
}


// Operators
MateriaSource & MateriaSource::operator=(const MateriaSource &assign)
{
	for (int i = 0; i < 4; i++) {
		_storage[i] = assign.getStorage(i);
		std::cout << "operator =: the type is " << _storage[i]->getType() << std::endl;
	}
	return *this;
}


// Getters / Setters
AMateria * MateriaSource::getStorage(int i) const
{
	return _storage[i];
}

void MateriaSource::learnMateria(AMateria* m) {
	static int i = 0;

	if (_storage[i % 4] == NULL) {
		_storage[i % 4] = m;
	}
	i++;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	if (type.compare("ice") && type.compare("cure")) {
		std::cerr << "Type not recognized" << std::endl;
		return NULL;
	}

	for (int i = 3; i >= 0; i--) {
		if (_storage[i] && _storage[i]->getType() == type) {
			return _storage[i]->clone();
		}
	}
	return NULL;
}
