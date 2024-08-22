#include "Span.hpp"

Span::Span(): _n(0), _array(0)
{}

Span::Span(unsigned int N): _n(N)
{
	this->_array.clear();
}

Span::~Span()
{}

void	Span::addNumber(int number)
{
	if (this->_array.size() >= this->_n)
		throw std::runtime_error("Array is full");
	this->_array.push_back(number);
}

void	Span::addNumbers(int count, ...)
{
	va_list	args;
	va_start(args, count);

	for (int i = 0; i < count; i++)
	{
		if (this->_array.size() >= this->_n)
		{
			va_end(args);
			throw std::out_of_range("Array is full");
		}
		int number = va_arg(args, int);
		this->_array.push_back(number);
	}
	va_end(args);
}

int		Span::shortestSpan()
{
	if (this->_array.size() < 2)
		throw std::runtime_error("Span to small to calculate difference");

	std::vector<int> sortedArr = this->_array;
	std::sort(sortedArr.begin(), sortedArr.end());

	int	minSpan = std::numeric_limits<int>::max();
	for (size_t i = 1; i < sortedArr.size(); ++i)
	{
		int	span = sortedArr[i] - sortedArr[i - 1];
		if (span < minSpan)
			minSpan = span;
	}

	return minSpan;
}

int		Span::longestSpan()
{
	if (this->_array.size() < 2)
		throw std::runtime_error("Span to small to calculate difference");

	int min = *std::min_element(_array.begin(), _array.end());
	int max = *std::max_element(_array.begin(), _array.end());

	return max - min;
}
