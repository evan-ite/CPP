#include "Serializer.hpp"

static uintptr_t    serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

static Data*        deserialize(uintptr_t raw)
{
    
}

Serializer::Serializer() {}

uintptr_t	Serializer::serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

Serializer::Serializer(const Serializer &copy)
{
	if (this != &copy)
		*this = copy;
}

Serializer& Serializer::operator=(const Serializer &assign)
{
	if (this != &assign)
		*this = assign;
	return *this;
}

Serializer::~Serializer() {}

