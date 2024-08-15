#include "Serializer.hpp"

Serializer::Serializer() {}

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

