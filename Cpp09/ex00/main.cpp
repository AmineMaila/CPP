#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	try
	{
		if (ac < 2)
			throw (BitcoinExchange::CouldNotOpenException());

		std::ifstream	input;
		std::string		line;

		input.open(av[1]);
		if (!input.is_open())
			throw (BitcoinExchange::CouldNotOpenException());
		getline(input, line);
		if (line != "date | value")
			throw (BitcoinExchange::FormatInvalidException());

		BitcoinExchange	btc;
		btc.run(input);
	}
	catch (std::exception& err)
	{
		std::cerr << "Error: " << err.what() << "." << std::endl;
	}
	return (0);
}