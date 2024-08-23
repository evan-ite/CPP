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
	std::ifstream file(dataFile);
    if (!file.is_open())
        throw std::runtime_error("Error loading data file");

	std::string line;
    while (std::getline(file, line)) 
		this->addPairToData(line);

	file.close();
}

void	BTC::addPairToData(std::string &line)
{
	
}

void	BTC::checkBTCValue(const std::string &inputFile)
{
	// check input valid file && open file

	// read line
		// check valid date
		// check valid value
		// find date in map
			// if not take date before
		// mulitply value by map key
		// print date and value

}
