#include "Span.hpp"

int main(int argc, char **argv, char **env)
{	
	(void)argc;
	(void)argv;
	uintptr_t addr = reinterpret_cast<uintptr_t>(env);
	std::srand(addr);
	{
		try
		{
			int		n = 20000;
			std::cout << "-----\nTesting with length n = " << n << std::endl;
			
			Span	sp(n);
			for (int i = 0; i < n; ++i)
				sp.addNumber(std::rand());
			
			std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			int n = 5;
			std::cout << "------\nTesting add n = " << n << " numbers at once" << std::endl;

			std::vector<int> numbers;
			for (int i = 0; i < n; ++i)
				numbers.push_back(std::rand());

			Span sp = Span(n);
			sp.addNumbers(numbers);

			std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << "Exception: " << e.what() << '\n';
		}
	}
	
	return 0;
}