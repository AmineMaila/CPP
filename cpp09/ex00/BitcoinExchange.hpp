#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <map>
#include <algorithm>
#include <fstream>
#include <iostream>

typedef struct	s_date
{
	int	year;
	int	month;
	int	day;
	int	daysInMonth;
}				t_date;

class BitcoinExchange
{
public:
	~BitcoinExchange();
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange& other);
	BitcoinExchange& operator=(const BitcoinExchange& other);

	void		run(std::ifstream& in);

	class CouldNotOpenException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	class FormatInvalidException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	class BadInputException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	class NegativeValueException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	class LargeValueException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

private:
	std::map<std::string, double> data;

	void		exchange(std::string date, double amount);
	std::string	trim(std::string line);
	t_date		datetoi(std::string date);
	double		validateAmount(std::string& amount);
	bool		validateDate(t_date& date);
	bool		isleap(int& year);
};


#endif