#include "RPN.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage: ./RPN \"expression\"" << std::endl;
		std::cerr << "\nExample: ./RPN \"8 9 * 9 -\"" << std::endl;
		return (1);
	}

	RPN rpn(argv[1]);
}
