#include "Converter.hpp"

int main (int argc, char **argv)
{
	if (argc != 2) {
		std::cerr << "Usage:\t./convert [value]" << std::endl;
		return (1);
	}

	Converter::convert(argv[1]);
	return (0);
}
