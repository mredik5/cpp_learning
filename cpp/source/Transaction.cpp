#include "../headers/Transaction.h"

Transaction::Transaction(int amount, string tot, int logId):amount(amount), typeOfTransaction(tot), id(logId) {};

string Transaction::Report()
{
    string report;
    report = "#" + id + typeOfTransaction + " - amount: " + to_string(amount);
    return report;
}
Transaction::~Transaction(){};
