/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:55:23 by mbonnet           #+#    #+#             */
/*   Updated: 2022/02/11 14:21:24 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my_define_include.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int	initial_deposit)
{
	char tmp[100];
	std::time_t t = std::time(NULL);

	Account::_nbAccounts++;
	this->_accountIndex = Account::_nbAccounts - 1;
	std::strftime(tmp, (sizeof(tmp)),"%Y%m%d_%H%M%S", std::localtime(&t));
	std::cout << VERT << "[" << tmp << "] index:" << this->_accountIndex << ";amount:" << initial_deposit << ";created" << BLANC << std::endl;
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
}
 
Account::~Account(void)
{
	char tmp[100];
	std::time_t t = std::time(NULL);

	std::strftime(tmp, (sizeof(tmp)),"%Y%m%d_%H%M%S", std::localtime(&t));
	std::cout << ROUGE << "[" << tmp << "] index:" << this->_accountIndex << ";amount:" << this->_amount<< ";closed" << BLANC << std::endl ;
}

int Account::getNbAccounts(void)
{
	 return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
	 return (Account::_totalAmount);
}
int Account::getNbDeposits(void)
{
	 return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	 return (Account::_totalNbWithdrawals);
}
void Account::displayAccountsInfos(void)
{
	char tmp[100];
	std::time_t t = std::time(NULL);

	std::strftime(tmp, (sizeof(tmp)),"%Y%m%d_%H%M%S", std::localtime(&t));
	std::cout << "[" << tmp << "] accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposite)
{
	char tmp[100];
	std::time_t t = std::time(NULL);

	this->_nbDeposits++;
	this->_amount += deposite;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposite;
	std::strftime(tmp, (sizeof(tmp)),"%Y%m%d_%H%M%S", std::localtime(&t));
	std::cout << BLEU << "[" << tmp << "] index:" << this->_accountIndex << ";p_amount:" << this->_amount - deposite << ";deposit:" << deposite << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << BLANC << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	char tmp[100];
	std::time_t t = std::time(NULL);

	std::strftime(tmp, (sizeof(tmp)),"%Y%m%d_%H%M%S", std::localtime(&t));
	if (this->_amount > withdrawal)
	{
		this->_nbWithdrawals++;
		this->_amount -= withdrawal;
		Account::_totalNbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		std::cout << VIOLET << "[" << tmp << "] index:" << this->_accountIndex << ";p_amount:" << this->_amount + withdrawal << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << BLANC << std::endl;
	}
	else
		std::cout << JAUNE << "[" << tmp << "] index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << BLANC << std::endl;
	return (0);	
}
int		Account::checkAmount(void) const
{
	return (Account::_amount);
}

void	Account::displayStatus(void) const
{
	char tmp[100];
	std::time_t t = std::time(NULL);

	std::strftime(tmp, (sizeof(tmp)),"%Y%m%d_%H%M%S", std::localtime(&t));
	std::cout << BLEU_2 << "[" << tmp << "] index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposit:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << BLANC << std::endl;
}

void	Account::_displayTimestamp(void)
{
	
}
/*
*/