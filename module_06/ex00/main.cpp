#include "Converter.hpp"

int main (int argc, char **argv)
{
	if (argc != 2) {
		std::cerr << "Usage: \n\t./convert [value]";
		return (1);
	}

	Converter::convert(argv[1]);
	return (0);
}
