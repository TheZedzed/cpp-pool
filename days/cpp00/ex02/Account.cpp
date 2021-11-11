#include "Account.hpp"
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Clock(void) {
	time_t	now = time(0);
	std::tm *tm = std::localtime(&now);
	std::cout << "[" << 1900 + tm->tm_year;
	std::cout << 1 + tm->tm_mon;
	std::cout << 5 + tm->tm_mday;
	std::cout << "_";
	std::cout << 5 + tm->tm_hour;
	std::cout << 30 + tm->tm_min;
	std::cout << tm->tm_sec;
	std::cout << "] ";
}

Account::Account( int initial_deposit ) {
	Clock();
	_amount = initial_deposit;
	_totalAmount += _amount;
	_accountIndex = _nbAccounts;
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";created";
	std::cout << std::endl;
	++_nbAccounts;
}

Account::~Account(void) {
	Clock();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";closed";
	std::cout << std::endl;
}

void	Account::displayAccountsInfos(void) {
	Clock();
	std::cout << "accounts:" << _nbAccounts;
	std::cout << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals;
	std::cout << std::endl;
}

void	Account::displayStatus(void) const {
	Clock();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals;
	std::cout << std::endl;
}

void	Account::makeDeposit(int deposit) {
	Clock();
	++_nbDeposits;
	++_totalNbDeposits;
	_totalAmount += deposit;
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << _amount + deposit;
	std::cout << ";nb_deposits:" << _nbDeposits;
	std::cout << std::endl;
	_amount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal) {
	Clock();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	if (withdrawal > _amount)
		std::cout << ";withdrawal:refused" << std::endl;
	else
	{
		++_nbWithdrawals;
		++_totalNbWithdrawals;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		std::cout << ";withdrawal:" << withdrawal;
		std::cout << ";amount:" << _amount;
		std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return true;
	}
	return false;
}

int		Account::checkAmount(void) const {
	return _amount;
}

int		Account::getNbAccounts(void) {
	return _nbAccounts;
}

int		Account::getTotalAmount(void) {
	return _totalAmount;
}

int		Account::getNbDeposits(void) {
	return _totalNbDeposits;
}

int		Account::getNbWithdrawals(void) {
	return _totalNbWithdrawals;
}
