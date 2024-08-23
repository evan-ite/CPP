#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <limits>
# include <vector>
# include <algorithm>
# include <stdint.h>

class Span
{
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &copy);
		~Span();

		Span& operator=(const Span &assign);

		void		addNumber(int number);
		void		addNumbers(const std::vector<int>& numbers);
		long		shortestSpan() const;
		long		longestSpan() const;

	private:
		unsigned int		_n;
		std::vector<int>	_array;
};

#endif