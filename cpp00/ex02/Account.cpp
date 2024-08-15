/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 14:52:10 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/10 21:49:14 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount= 0;
int Account::_totalNbDeposits= 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{
	time_t currentTime = time(NULL);
	struct tm *time = localtime(&currentTime);
	std::cout << '[' << 1900 + time->tm_year;
	if (time->tm_mon < 10)
		std::cout << '0';
	std::cout << time->tm_mon + 1;
	if (time->tm_mday < 10)
		std::cout << '0';
	std::cout << time->tm_mday << '_';
	if (time->tm_hour < 10)
		std::cout << '0';
	std::cout << time->tm_hour;
	if (time->tm_min < 10)
		std::cout << '0';
	std::cout << time->tm_min;
	if (time->tm_sec < 10)
		std::cout << '0';
	std::cout << time->tm_sec << "] ";
}

Account::Account( int initial_deposit )
{
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
	<< ";amount:" << _amount
	<< ";created" << std::endl;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
	<< ";amount:" << _amount
	<< ";closed" << std::endl;
}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts()
	<< ";total:" << getTotalAmount()
	<< ";deposits:" << getNbDeposits()
	<< ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	int p_amount = _amount;
	_totalNbDeposits++;
	_nbDeposits++;
	_totalAmount += deposit;
	_amount += deposit;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex
	<< ";p_amount:" << p_amount
	<< ";deposit:" << deposit
	<< ";amount:" << _amount
	<< ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int		p_amount = _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
	<< ";p_amount:" << p_amount;
	if (withdrawal < checkAmount())
	{
		_totalNbWithdrawals++;
		_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_amount -= withdrawal;
		std::cout << ";withdrawal:" << withdrawal
		<< ";amount:" << _amount
		<< ";nb_withdrawals:" << _nbDeposits << std::endl;
		return (true);
	}
	else
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
}

int	Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
	<< ";amount:" << _amount
	<< ";deposits:" << _nbDeposits
	<< ";withdrawals:" << _nbWithdrawals << std::endl;
}
