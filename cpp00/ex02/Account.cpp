/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 21:37:44 by chajeon           #+#    #+#             */
/*   Updated: 2025/04/08 15:55:58 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
# include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

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
	std::cout << "accounts:"<<_nbAccounts << ";total:" \
	<< _totalAmount << ";deposits:" << _totalNbDeposits \
	<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account(int initial_deposit )
{
	_accountIndex = _nbAccounts;
	_nbAccounts ++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:"<< _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}
Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:"<< _accountIndex << ";amount:" << _amount <<";closed" <<std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:"<<_accountIndex<<";p_amount:" << _amount << ";deposit:" << deposit;
	_amount += deposit;
	_nbDeposits ++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	std::cout << ";amount:"<< _amount << ";nb_deposits:"<<_nbDeposits << std::endl;
}
bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" <<_accountIndex << ";p_amount:" << _amount << ";withdrawal:";
	if (withdrawal > _amount)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:"<<_nbWithdrawals << std::endl;
	return true;
}
int		Account::checkAmount( void ) const
{
	std::cout << "amount"<<std::endl;
	return 1;
}
void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:"<< _accountIndex << ";amount:" \
	<< _amount << ";deposits:" << _nbDeposits << ";withdrawals:" \
	<< _nbWithdrawals <<std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t rawtime;
	struct tm* timeinfo;
  	char buffer[80];

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(buffer, 80, "%y%m%d_%H%M%S", timeinfo);
	std::cout << "[" << buffer << "] ";
}