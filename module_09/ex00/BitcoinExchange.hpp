#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <string>
# include <iostream>
# include <iomanip>
# include <map>

# define DATAFILE "data.csv"
# define CURRENT_YEAR 2024

class BTC
{
	public:
		BTC(const std::string &dataFile);
		BTC(const BTC &copy);
		~BTC();

		BTC& operator=(const BTC &assign);

		void	checkBTCValue(const std::string &inputFile);

		class InputException : public std::exception {
			private:
				std::string _erCode;
			public:
				InputException(const std::string& erCode);
				~InputException() throw();
				const char* what() const throw();
		};

	private:
		void	addPairToData(std::string &line);
		void	validDate(std::string &key);
		double	validValue(std::string &value);
		void	execute(std::string &line);

		std::map<std::string, double> _data; 

};

double			stringToDouble(const std::string& str);
void			trimWhiteSpace(std::string &str);
std::string		getDecimalPlaces(double value);

#endif