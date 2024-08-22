#include "Span.hpp"

int main(int argc, char **argv, char **env)
{	
	(void)argc;
	(void)argv;

	uintptr_t addr = reinterpret_cast<uintptr_t>(env);
	std::srand(addr);

	for (int i = 0)
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << '\n';
	}

	return 0;
}