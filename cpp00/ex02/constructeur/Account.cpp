/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:55:23 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/03 18:55:06 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my_define_include.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int	initial_deposit)
{
	Account::_nbAccounts++;
	this->_accountIndex = Account::_nbAccounts - 1;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << initial_deposit << ";created"  << std::endl;
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
}
 
Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount<< ";closed";
	if (this->_accountIndex != 7)
		std::cout << std::endl;
		
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
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposite)
{

	this->_nbDeposits++;
	this->_amount += deposite;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposite;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount - deposite << ";deposit:" << deposite << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits  << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	if (this->_amount > withdrawal)
	{
		this->_nbWithdrawals++;
		this->_amount -= withdrawal;
		Account::_totalNbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		std::cout  << "index:" << this->_accountIndex << ";p_amount:" << this->_amount + withdrawal << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals  << std::endl;
	}
	else
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused"  << std::endl;
	return (0);	
}
int		Account::checkAmount(void) const
{
	return (Account::_amount);
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals  << std::endl;
}

void	Account::_displayTimestamp(void)
{
	char tmp[100];
	time_t t = time(NULL);

	strftime(tmp, (sizeof(tmp)),"%Y%m%d_%H%M%S", localtime(&t));
	std::cout << "[" << tmp << "] ";
}