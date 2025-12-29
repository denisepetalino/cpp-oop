#include <string>
#include <iostream>

using namespace std;

class BankAccount{
    private:
    std::string accountNumber;
    double balance;
    // nested class
    class Transaction{
    };
    public:
    //constructor
    BankAccount(const std::string& bankAccountNumber, double bankBalance);
    //getter methods
    std::string getAccountNumber() const;
    double getBalance() const;
    //setter methods
    void setAccountNumber(const std::string& newAccountNumber);
    void setBalance(double newBalance);
};