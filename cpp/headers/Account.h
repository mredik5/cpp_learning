#include <iostream>
#include <vector>
#include "../headers/Transaction.h"
using namespace std;

class Account
{
private:
    int balance;
    vector <Transaction> log;

public:
    vector<string> Report();
    bool Deposit(int amount);
    bool Withdraw(int amount);
    int GetBalance() {return balance;}
    int GetLastId() {return log.size();}
    Account();
    ~Account();
};