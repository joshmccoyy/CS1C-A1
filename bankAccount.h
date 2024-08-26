#ifndef bankAccount_H
#define backAccount_H

#include <string>
using namespace std;

class bankAccount {

public:
	bankAccount(string n = "", int acctNumber = 0, double bal = 0);
	int getAccountNumber();
	double getBalance();
	string getName();
	void setName(string n);
	virtual void withdraw(double amount);
	void deposit(double amount);
	virtual void createMonthlyStatement() = 0;
	virtal void print();

portected:
	int accountNumber;
	string name;
	double balance;

};

#endif
