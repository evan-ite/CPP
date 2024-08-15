#include "Converter.hpp"

bool    Converter::isPseudoLiteral(const std::string& value) 
{
    const char* pseudo_literals[] = {
        "-inff",
        "+inff",
        "-inf",
        "+inf",
        "nan"
    };

    for (size_t i = 0; i < sizeof(pseudo_literals) / sizeof(pseudo_literals[0]); ++i) {
        if (value == pseudo_literals[i]) {
            printPseudoLiterals(value);
            return true;
        }
    }
    return false;
}

void    Converter::printPseudoLiterals(const std::string &value)
{
    if (value == "+inff" || value == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << value << std::endl;
		std::cout << "double: " << value.substr(0, value.size() - 1) << std::endl;
		return;
	}
    else if (value == "+inf" || value == "-inf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << value << "f" << std::endl;
		std::cout << "double: " << value << std::endl;
		return;
	}
	else if (value == "nan") 
    {
        std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << value << "f" << std::endl;
		std::cout << "double: " << value << std::endl;
        return;
    }
}