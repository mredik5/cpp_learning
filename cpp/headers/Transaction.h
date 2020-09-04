#include <iostream>
#include <vector>
using namespace std;

class Transaction
{
private:
    int id;
    int amount;
    string typeOfTransaction;

public:
    string Report();

    Transaction();
    Transaction(int amount, string tot, int logId);
    ~Transaction();
};