#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <string>
# include <iostream>
# include <stdint.h>

struct Data
{
	std::string name;
	int         age;
};

class Serializer
{
	public:
	~Serializer();

	static uintptr_t	serialize(Data* ptr);
	static Data*		deserialize(uintptr_t raw);

	private:
	Serializer();
	Serializer(const Serializer &copy);
	Serializer &operator=(const Serializer &assign);
};

#endif
