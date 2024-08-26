

#include <iostream>
#include <iomanip>
#include <vector>
 
#include "bankAccount.h"
#include "savingsAccount.h"
#include "highInterestSavings.h"
#include "noServiceChargeChecking.h"
#include "serviceChargeChecking.h"
#include "highInterestChecking.h"
#include "certificateOfDeposit.h"
#include "checkingAccount.h"

using namespace std;
  
int main()
{
    vector<bankAccount *> accountsList;

    accountsList.push_back(new savingsAccount("Bill", 10200, 2500));
    accountsList.push_back(new highInterestSavings("Susan", 10210, 2000));
    accountsList.push_back(new noServiceChargeChecking("John", 20100, 
                                                    3500));
    accountsList.push_back(new serviceChargeChecking("Ravi", 30100, 1800));
    accountsList.push_back(new highInterestChecking("Sheila", 20200, 
                                                 6000));
    accountsList.push_back(new certificateOfDeposit("Hamid", 51001, 18000,
                                                0.075, 18));

    cout << "January:\n-------------" << endl;
    for (int i = 0; i < accountsList.size(); i++)
    {
        accountsList[i]->createMonthlyStatement();
        accountsList[i]->print();
        cout << endl;
    }

    cout << "\nFebruary:\n-------------" << endl;
    for (int i = 0; i < accountsList.size(); i++)
    {
        accountsList[i]->createMonthlyStatement();
        accountsList[i]->print();
        cout << endl;
    }

    for (int i = 0; i < accountsList.size(); i++)
    {
         accountsList[i]->withdraw(500);
    }

    cout << "\nMarch:\n-------------" << endl;
    for (int i = 0; i < accountsList.size(); i++)
    {
        accountsList[i]->createMonthlyStatement();
        accountsList[i]->print();
        cout << endl;
    }

    return 0;
}
