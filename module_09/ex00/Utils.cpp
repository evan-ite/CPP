#include "BitcoinExchange.hpp"


BTC::InputException::InputException(const std::string& erCode) : _erCode(erCode) 
{}

BTC::InputException::~InputException() throw() {}

const char* BTC::InputException::what() const throw() {
    return _erCode.c_str();
}

double stringToDouble(const std::string& str) 
{
    std::stringstream ss(str);
    double result;
    ss >> result;
    if (ss.fail()) {
        throw std::invalid_argument("Invalid integer format: " + str);
    }
    return result;
}

void	trimWhiteSpace(std::string &str)
{
	size_t start = str.find_first_not_of(" \t\n\r\f\v");
	if (start != std::string::npos)
		str = str.substr(start);
	else
		str.clear();

	size_t end = str.find_last_not_of(" \t\n\r\f\v");
	if (end != std::string::npos)
		str = str.substr(0, end + 1);
}

std::string getDecimalPlaces(double value) 
{
    std::ostringstream oss;
    oss << std::fixed << value;
    std::string str = oss.str();

	size_t pos = str.find('.');
	if (pos != std::string::npos)
	{
		size_t end = str.find_last_not_of('0');
		if (end != std::string::npos && end >= pos)
			str.erase(end + 1);
		if (str[str.size() - 1] == '.')
			str.erase(str.size() - 1);
	}
    
	return str;
}