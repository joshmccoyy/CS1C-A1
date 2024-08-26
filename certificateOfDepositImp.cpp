#ifndef CertificateOfDepositImp_H
#define CertificateOfDepositImp_H

#include "certificateOfDeposit.h"

using namespace std;

const double certificateOfDeposit::INTEREST_RATE = 0.05;
const int certificateOfDeposit::NUMBER_OF_MATURITY_MONTHS = 6;

certificateOfDeposit::certificateOfDeposit(string n, int acctNumber, double bal)
							: bankAccount(n, acctNumber, bal)
{
	interestRate = INTEREST_RATE;
	maturityMonths = 0;
	cdMonth = 0;
}

certificateOfDeposit::certificateOfDeposit(string n, int acctNumber, double bal, double intRate, int maturityMon)
							: bankAccount (n, acctNumber, bal)
{
	interestRate = INTEREST_RATE;
	maturityMonths = maturityMon;
	cdMonth = 0;
}

double certificateOfDeposit::getInterestRate()
{
	return interestRate;
}

void certificateOfDeposit::setInterestRate(double rate)
{
	interestRate = rate;
}

double certificateOfDeposit::getCurrentCDMonth()
{
	return cdMonth;
}

void certificateOfDeposit::setCurrentCDMonth(int month)
{
	cdMonth = month;
}

double certificateOfDeposit::getMaturityMonths()
{
	return maturityMonths;
}

void certificateOfDeposit::getMaturityMonths(int month)
{
	maturityMonths = month;
}

void certificateOfDeposit::postInterest()
{
	balance = balance + balance * interestRate;
}

void certificateOfDeposit::withdraw(double amount)
{
	//No withdrawal until maturity
}

void certificateOfDeposit::withdraw()
{
	if (cdMonth > maturityMonths)
		balance = 0;
	else
		cout << "CD has not been matured. No withdrawal." << endl;
}

void certificateOfDeposit::createMonthlyStatement()
{
	postInterest();
	cdMonth++;
}

void certificateOfDeposit::print()
{
	cout << fixed << showpoint << set precision(2);
	cout << "Certificate of Deposit: " << getName() << "\t ACCT# "
		  << getAccountNumber() << "\tBalance: $" << getBalance();
}
