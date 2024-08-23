#include "Span.hpp"

Span::Span(): _n(0), _array(0)
{}

Span::Span(unsigned int N): _n(N)
{
	this->_array.clear();
}

Span::Span(const Span &copy): _n(copy._n), _array(copy._array)
{}

Span::~Span()
{}

Span& Span::operator=(const Span &assign)
{
	if (this != &assign)
	{
		this->_n = assign._n;
		this->_array = assign._array;
	}
	return (*this);
}


void	Span::addNumber(int number)
{
	if (this->_array.size() >= this->_n)
		throw std::runtime_error("Array is full, cant add number");
	this->_array.push_back(number);
}

void	Span::addNumbers(const std::vector<int>& numbers)
{
	if (this->_array.size() + numbers.size() > this->_n)
		throw std::out_of_range("Array is full, cant add numbers");

	this->_array.insert(this->_array.end(), numbers.begin(), numbers.end());
}

long	Span::shortestSpan() const
{
	if (this->_array.size() < 2)
		throw std::runtime_error("Span to small to calculate difference");

	std::vector<int> sortedArr = this->_array;
	std::sort(sortedArr.begin(), sortedArr.end());

	long minSpan = std::numeric_limits<long>::max();
	for (size_t i = 1; i < sortedArr.size(); ++i)
	{
		long span = sortedArr[i] - sortedArr[i - 1];
		if (span < minSpan)
			minSpan = span;
	}

	return minSpan;
}

long	Span::longestSpan() const
{
	if (this->_array.size() < 2)
		throw std::runtime_error("Span to small to calculate difference");

	long min = *std::min_element(_array.begin(), _array.end());
	long max = *std::max_element(_array.begin(), _array.end());

	return max - min;
}
