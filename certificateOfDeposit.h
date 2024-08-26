#ifndef certificateOfDeposit_H
#define certificateOfDeposit_H

#include "bankAccount.h"

using namespace std;

class certificateOfDeposit: public bankAccount
{

public:

	certificateOfDeposit(string n, int acctNumber, double bal);
	certificateOfDeposit(string n, int acctNumber, double bal, double intRate, int maturityMon);

	double getInterestRate();
	void setInterestRate(double rate);
	double getCurrentCDMonth();
	void setCurrentCDMonth(int month);
	double getMaturityMonths();
	void getMaturityMonths(int month);
	void postInterest();
	void withdraw(double amount);
	void withdraw();
	void createMonthlyStatement();
	void print();

private:
	static const double INTEREST_RATE; // = 0.05
	static const int NUMBER_OF_MATURITY_MONTHS; // = 6

	double interestRate;
	int maturityMonths;
	int cdMonth;

};

#endif
