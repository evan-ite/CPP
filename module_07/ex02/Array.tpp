#include "Array.hpp"

template <typename T>
Array<T>::Array()
{}

template <typename T>
Array<T>::Array(unsigned int n)
{}

template <typename T>
Array<T>::Array(Array const &copy)
{}

template <typename T>
Array& Array<T>::operator=(Array const &assign)
{}

template <typename T>
int Array<T>::size()
{}

template <typename T>
T& Array<T>::operator[](std::size_t index)
{}

template <typename T>
const T& Array<T>::operator[](std::size_t index) const
{}