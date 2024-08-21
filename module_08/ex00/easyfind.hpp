#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <vector>
# include <list>
# include <deque>
# include <iostream>

template <typename T>
typename T::iterator easyfind(T &container, int n)
{
    typename T::iterator it = std::find(container.begin(), container.end(), n);

    if (it != container.end())
        return it;
        
    throw std::exception();
}

#endif