#include "PmergeMe.hpp"

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cerr << "Usage: ./PmergeMe [array of integers]" << std::endl;
		return (1);
	}

	PmergeMe sorter(argc, argv);
}
