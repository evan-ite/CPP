#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>
# include <ostream>

class Span
{
	public:
		Span(unsigned int N);

		
	private:
		unsigned int        _n;
		std::vector<int>    _array;
};

#endif