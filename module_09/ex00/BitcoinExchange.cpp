#include "BitcoinExchange.hpp"

BTC::BTC(const BTC &copy): _data(copy._data)
{}

BTC::~BTC()
{}

BTC& BTC::operator=(const BTC &assign)
{
	if (this != &assign)
		this->_data = assign._data;
	return *this;
}

BTC::BTC(const std::string &dataFile)
{
	std::ifstream file(dataFile.c_str());
	if (!file.is_open())
		throw std::runtime_error("Error loading data file");

	std::string line;
	std::getline(file, line);
    while (std::getline(file, line)) 
		this->addPairToData(line);

	file.close();
}

void	BTC::addPairToData(std::string &line)
{
	std::istringstream iss(line);
	std::string date;
	std::string valueStr;

	if (!std::getline(iss, date, ',') || !std::getline(iss, valueStr))
	{
		std::cerr << "Error parsing data: " << line << std::endl;
		return ;
	}
	try
	{
		validDate(date);
		double value = stringToDouble(valueStr);
		this->_data[date] = value;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
}

void	BTC::validDate(std::string &date)
{
	trimWhiteSpace(date);
	if (date.length() != 10 || date[4] != '-' || date[7] != '-')
		throw InputException("bad input => " + date);
	
	for (size_t i = 0; i < date.length(); i++)
	{
		if (i == 4 || i == 7)
			continue;
		if (!std::isdigit(date[i]))
			throw InputException("bad input => " + date);
	}
	int year = stringToDouble(date.substr(0, 4));
	int month = stringToDouble(date.substr(5, 2));
	int day = stringToDouble(date.substr(8));
	if (year > (CURRENT_YEAR + 1) || month < 1 || month > 12 || day < 1 || day > 31)
		throw InputException("incorrect date => " + date);
}

void	BTC::checkBTCValue(const std::string &inputFile)
{
	std::ifstream file(inputFile.c_str());
	if (!file.is_open())
		throw std::runtime_error("Error loading input file");

	std::string line;
	std::getline(file, line);
	while (std::getline(file, line))
		this->execute(line);

	file.close();
}

void	BTC::execute(std::string &line)
{
	std::istringstream iss(line);
	std::string date;
	std::string valueStr;

	try
	{
		if (!std::getline(iss, date, '|') || !std::getline(iss, valueStr))
			throw InputException("bad input => " + line);
		validDate(date);
		double value = validValue(valueStr);
		std::map<std::string, double>::const_iterator it = this->_data.lower_bound(date);
		if (it == this->_data.end() || it->first != date)
		{
			if (it == this->_data.begin())
				throw InputException("date too early => " + date);
			else
				--it;
		}
		std::cout << date << " => " << getDecimalPlaces(value) << " = " << getDecimalPlaces(value * it->second) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
}

double	BTC::validValue(std::string &valueStr)
{
	double value = stringToDouble(valueStr);
	if (value < 0)
		throw InputException("not a positive number.");
	else if (value > 1000)
		throw InputException("too large a number.");
	return value;
}
