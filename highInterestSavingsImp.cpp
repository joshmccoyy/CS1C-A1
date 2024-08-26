//Implementation File

#include <iostream>
#include <string>
#include <iomanip>
#include "highInterestSavings.h"

using namespace std;

const double highInterestSavings::MINIMUM_BALANCE = 2500.00;
const double highInterestSavings::INTEREST_RATE = 0.05;

highInterestSavings::highInterestSavings(string n, int acctNumber, double bal)
						  : savingsAccount(n, acctNumber, bal, INTEREST_RATE)
{
	minimumBalance = MINIMUM_BALANCE;
}

highInterestSavings::highInterestSavings(string n, int acctN, double balance, double intRate, double minBalance)
						  : savingsAccount(n, acctN, balance, intRate)
{
	minimumBalance = minBalance;
}
						
double highInterestSavings::getMinimumBalance()
{
	return minimumBalance;
}

bool highInterestSavings::verifyMinimumBalance(double amount)
{
	return (balance - amount >= minimumBalance);
}

void highInterestSavings::withdraw(double amount)
{
	if (verifiyMinimumBalance(amount))
		balance = balance - amount;
}

void highInterestSavings::print()
{
	cout << fixed << showpoint << setprecision(2);
	cout << "High Interest Savings: " << getName() << "\t ACCT # "
		  << getAccountNumber() << "\tBalance: $" << getBalance();
}
 
