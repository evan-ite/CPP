#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <ostream>
# include <cstdarg>
# include <stdarg.h>
# include <cstdlib>
# include <limits>
# include <vector>
# include <algorithm>


class Span
{
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &copy);
		~Span();

		Span& operator=(const Span &assign);

		void	addNumber(int number);
		void	addNumbers(int count, ...);
		int		shortestSpan();
		int		longestSpan();

	private:
		unsigned int        _n;
		std::vector<int>    _array;
};

#endif