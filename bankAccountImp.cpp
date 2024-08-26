//Implementation File

#include <iostream>
#include <string>
#include <iomanip>
#include <bankAccount.h>

using namespace std;

bankAccount::bankAccount(string n, int acctNumber, double bal)
{
	name = n;
	accountNumber = acctNumber;
	balance = bal;
}

int bankAccount::getAccountNumber()
{
	return accountNumber;	
}

int bankAccount::getBalance()
{
	return balance;
}

string bankAccount::getName()
{
	return name;
}

void bankAccount::setName(string n)
{
	name = n;
}

void bankAccount::withdraw(double amount)
{
	balance = balance - amount;
}

void bankAccount::deposit(double amount)
{
	balance = balance + amount;
}

void bankAccount::print()
{
	cout << fixed << showpoint << setprecision (2);
	cout << name << " " << accountNumber << " balance : $"
		  << balance;
}
