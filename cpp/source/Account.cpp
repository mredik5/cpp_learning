#include "../headers/Account.h"

Account::Account(): balance(0){};

vector<string> Account::Report()
{
    vector <string> report;
    report.push_back("Balance is: " + to_string(balance));
    report.push_back("Transactions: ");

    for (auto t:log)
    {
        report.push_back(t.Report());
    }
    report.push_back("-------------");

    return report;
}

bool Account::Deposit(int amount)
{
    if (amount <= 0) return false;
    else 
    {
        balance +=amount;
        log.push_back(Transaction(amount, "Deposit", GetLastId()));
        return true;
    }
}

bool Account::Withdraw(int amount)
{
    if (amount <= 0 || amount > balance) return 0;
    else
    {
        balance -= amount;
        log.push_back(Transaction(amount, "Withdraw", GetLastId()));
        return true;
    }
}
Account::~Account(){};