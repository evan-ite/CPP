#include "BitcoinExchange.hpp"

BTC::BTC(const std::string &dataFile)
{
	// check input valid file && open file

	// read line
		// add first string to map.key
		// convert second string to int and add to map.value
}

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
