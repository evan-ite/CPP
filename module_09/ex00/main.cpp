#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage: ./btc input.txt" << std::endl;
		return 1;
	}

	try
	{
		BTC btc(DATAFILE);
		btc.checkBTCValue(argv[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}