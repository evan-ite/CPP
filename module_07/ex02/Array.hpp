#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <cstddef>

template <typename T>
class Array
{
    public:
        Array(): _size(0)
        {
            this->_elements = new T[this->_size];
        }

        Array(size_t n): _size(n)
        {
            this->_elements = new T[this->_size];
        }

        Array(Array const &copy)
        {
            this->_size = copy._size;
            this->_elements = new T[this->_size];
            for (size_t i = 0; i < _size; i++)
                this->_elements[i] = copy._elements[i];
        }

        Array& operator=(Array const &assign)
        {
            if (this != &assign)
            {
                this->_size = assign._size;
                if (this->_elements)
                    delete [] _elements;
                this->_elements = new T[this->_size];
                for (size_t i = 0; i < _size; i++)
                    this->_elements[i] = assign._elements[i];
            }
            return *this;
        }

        ~Array()
        {
            if (this->_elements)
                delete [] _elements;
        }

        size_t size() const
        {
            return _size;
        }

        T& operator[](std::size_t index)
        {
            if (index >= _size)
                throw std::exception();
            
            return _elements[index];
        }

        const T& operator[](std::size_t index) const
        {
            if (index >= size)
                throw std::exception();
            
            return _elements[index];
        }

    private:
        T          *_elements;
        size_t      _size;
};

#endif