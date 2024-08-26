//Implementation File

#include <iostream>
#include <string>
#include <iomanip>
#include "savingsAccount.h"

using namespace std;

const double savingsAccount::INTEREST_RATE = 0.03;

savingsAccount::savingsAccount(string n, int acctNumber, double bal)
					: bankAccount(n, acctNumber, bal)
{
	interestRate = INTEREST_RATE;
}

savingsAccount::savingsAccount(string n, int acctNumber, double bal, double intRate)
					: bankAccount(n, acctNumber, bal)
{
	setInterestRate(intRate);
}

double savingsAccount::getInterestRate()
{
	return interestRate;
}

void savingsAccount::setInterestRate(double rate)
{
	interestRate = rate;
}

void savingsAccount::postInterest()
{
	balance = balance + balance * interestRate;
}

void savingsAccount::createMonthlyStatement()
{
	postInterest();
}

void savingsAccount::print()
{
	cout << fixed << showpoint << setprecision(2);
	cout << "Savings account: " << getName() << "\t ACCT# "
		  << getAccountNumber() << "\tBalance: $" << getBalance();
}
