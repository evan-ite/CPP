#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <cstddef>

template <typename T>
class Array
{
    public:
        Array();
        Array(unsigned int n);
        Array(Array const &copy);
        Array& operator=(Array const &assign);

        int size();
        T& operator[](std::size_t index);
        const T& operator[](std::size_t index) const;

    private:
        T*  elements;
};


#include "Array.tpp"

#endif