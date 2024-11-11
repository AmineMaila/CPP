#include "BitcoinExchange.hpp"

BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange::BitcoinExchange()
{
	std::ifstream	database;
	std::string		input;
	std::string		date;
	double			rate;

	database.open("data.csv");
	if (!database.is_open())
		throw (BitcoinExchange::CouldNotOpenException());
	while (getline(database, input))
	{
		date = input.substr(0, input.find(','));
		rate = atof(input.substr(input.find(',') + 1, input.size()).c_str());
		this->data[date] = rate;
	}
	this->data.erase(std::prev(this->data.end()));
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other)
{
	*this = other;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
	if (this != &other)
		this->data = other.data;
	return (*this);
}

bool	BitcoinExchange::isleap(int& year)
{
	if (year % 100 == 0)
		return (year % 400 == 0 ? true : false);
	else
		return (year % 4 == 0 ? true : false);
}

bool	BitcoinExchange::validateDate(t_date& date)
{
	if (date.year < 1 || date.month < 1 || date.day < 1)
		return (false);

	if (date.month > 12)
		return (false);
	if (date.day > date.daysInMonth)
		return (false);
	return (true);
}

t_date	BitcoinExchange::datetoi(std::string date)
{
	t_date	result;

	for (size_t i = 0; i < date.length(); i++)
	{
		if (i == 4 || i == 7)
			continue;
		if (!isdigit(date[i]))
			throw(BitcoinExchange::BadInputException());
	}
	result.year = stoi(date);
	date.erase(0, 5);
	result.month = stoi(date);
	date.erase(0, 3);
	result.day = stoi(date);

	int	daysInMonths[13] = {0, 31, 28, 31, 30, 31, 30 ,31 ,31 ,30 ,31 ,30 , 31};

	if (isleap(result.year))
		daysInMonths[2] = 29;

	result.daysInMonth = daysInMonths[result.month];

	return (result);
}

double	BitcoinExchange::validateAmount(std::string& amount)
{
	double result;
	char		*stop;
	result = strtod(amount.c_str(), &stop);

	if (*stop)
		throw (BitcoinExchange::BadInputException());
	else if (result < 0)
		throw (BitcoinExchange::NegativeValueException());
	else if (result > 1000)
		throw (BitcoinExchange::LargeValueException());
	return (result);
}

std::string	BitcoinExchange::trim(std::string line)
{
	size_t start = 0;
	while (start < line.length() && isspace(line[start]))
		start++;

	size_t n = line.size() - 1;
	while (n > 0 && isspace(line[n]))
		n--;
	return(line.substr(start, n - start + 1));
}

void	BitcoinExchange::exchange(std::string date, double amount)
{
	t_date		_date;
	_date = datetoi(date);

	if (!validateDate(_date))
		throw (BitcoinExchange::BadInputException());

	std::cout << date << " => " << amount << " = ";

	std::map<std::string, double>::iterator itr = data.lower_bound(date);
	std::map<std::string, double>::iterator prev = itr;
	
	if (itr == data.begin() || itr->first == date)
		std::cout << amount * itr->second << std::endl;
	else if (itr == data.end())
		std::cout << amount * std::prev(itr)->second << std::endl;
	else
	{
		--prev;
		t_date prvDate = datetoi(prev->first);
		t_date nextDate = datetoi(itr->first);

		if (_date.month < nextDate.month)
			nextDate.day += _date.daysInMonth;
		else if (_date.month > prvDate.month)
			prvDate.day -= prvDate.daysInMonth;
	
		int prevDis = _date.day - prvDate.day;
		int nextDis = nextDate.day - _date.day;

		if (prevDis < nextDis)
			std::cout << amount * prev->second << std::endl;
		else
			std::cout << amount * itr->second << std::endl;
	}
}

void	BitcoinExchange::run(std::ifstream& in)
{
	std::string	line;

	while (std::getline(in, line))
	{
		try
		{
			size_t	delim;
			delim = line.find("|");
			if (delim == std::string::npos)
				throw (BitcoinExchange::BadInputException());

			std::string	value;
			std::string	date;
			date = trim(line.substr(0, delim));
			value = trim(line.substr(delim + 1, line.size()));

			if (date.size() != 10 || date[4] != '-' || date[7] != '-')
				throw (BitcoinExchange::BadInputException());

			double	amount = validateAmount(value);
			exchange(date, amount);
		}
		catch (BitcoinExchange::BadInputException& err)
		{
			std::cout << "Error: " << err.what() << " => " << line << std::endl;
		}
		catch (std::exception& err)
		{
			std::cout << "Error: " << err.what() << '.' << std::endl;
		}
	}
}

const char *BitcoinExchange::CouldNotOpenException::what() const throw()
{
	return ("could not open file");
}

const char *BitcoinExchange::FormatInvalidException::what() const throw()
{
	return ("format invalid");
}

const char *BitcoinExchange::BadInputException::what() const throw()
{
	return ("bad input");
}

const char *BitcoinExchange::NegativeValueException::what() const throw()
{
	return ("not a positive number");
}

const char *BitcoinExchange::LargeValueException::what() const throw()
{
	return ("too large a number");
}
