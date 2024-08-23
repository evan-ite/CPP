#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <map>

# define DATAFILE "data.csv"

class BTC
{
	public:
		BTC(const std::string &dataFile);
		BTC(const BTC &copy);
		~BTC();

		BTC& operator=(const BTC &assign);

		void	checkBTCValue(const std::string &inputFile);

	private:
		void	addPairToData(std::string &line);

		std::map<std::string, int> _data; 

};

#endif