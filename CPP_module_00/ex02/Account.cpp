/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 19:56:35 by irodrigo          #+#    #+#             */
/*   Updated: 2022/09/14 10:49:14 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iomanip>    // using standard E/S functions
#include <iostream>   // Flow control E/S
#include <ctime>	  // time functions and structures

int Account::_totalAmount = 0;
int Account::_nbAccounts = 0;
int Account::_totalNbWithdrawals = 0;
int Account::_totalNbDeposits = 0;

//public functions used by class
	//constructor
Account::Account(int initial_deposit)
{
	this->_displayTimestamp();
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = initial_deposit;
	this->_totalAmount += this->_amount;
	this->_nbWithdrawals = 0;
	this->_nbDeposits = 0; // necesary initialization for avoid negative values

	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";created" << std::endl;
}
	// destructor
Account::~Account(void)
{
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}
	
	// account display information functions
void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";;
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << " accounts:" << Account::getNbAccounts();
	std::cout << ";total:" << Account::getTotalAmount();
	std::cout << ";deposits:" << Account::getNbDeposits();
	std::cout << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

	// account movement actions
void	Account::makeDeposit(int deposit)
{
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";";
	if (deposit > 0)
	{
		++this->_nbDeposits;
		Account::_totalNbDeposits += this->_nbDeposits;
		std::cout << "p_amount:" << this->_amount << ";";
		std::cout << "deposit:" << deposit << ";";
		this->_amount += deposit;
		this->_totalAmount += deposit;
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "nb_deposits:" << this->_nbDeposits << ";" << std::endl;
	}
	else
		std::cout << "deposit:refused" << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal){
	bool status;

	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	if (withdrawal < this->_amount)
	{
		std::cout << "withdrawal:" << withdrawal << ";";
		this->_amount -= withdrawal;
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "nb_withdrawals:" << ++this->_nbWithdrawals << std::endl;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals += this->_nbWithdrawals;
		status = true;
	}	
	else
	{
		std::cout << "withdrawal:refused" << std::endl;
		status = false;
	}
	return (status);
}

/* private functions used by class
** ===============================
*/

/* function that obtains formatted date and time for timestamps
** althought strftime function of ctime header that prints for
** matted localtime strings passed as pointer with length
*/
void Account::_displayTimestamp(void)
{
	time_t now;
    char tm_stmp[16];
	
	time (&now);
    strftime(tm_stmp, 15, "%Y%m%d_%H%M%S", localtime(&now));
	std::cout << "[" << tm_stmp << "]";
}

/* getters used by class
** =====================
*/

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int		Account::checkAmount(void) const
{
	return (Account::_amount);
}
