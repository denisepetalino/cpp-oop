#include <string>
#include <iostream>

using namespace std;

class BankAccount{
  private:
  std::string accountNumber;
  double balance;
  //nested class
  class Transaction{
    private:
    BankAccount& account;
    double amount;

    public:
    Transaction(BankAccount& acct, double amt) : account(acct), amount(amt){}

    void deposit(){
      if (amount <=0){
        std::cout << "Deposit failed. Amount must be greater than 0.";
        return;
      }

      account.balance += amount;
      std::cout<< "Depositing: " << amount << " New balance: " << account.balance << "\n";
    }

    bool withdraw(){
      if (account.balance < amount){
        std::cout << "Withdrawal of " << amount << " failed. Insufficient balance: " << account.balance;
      } else {
        std::cout<< "Current balance: " << account.balance;
        account.balance -= amount;
        std::cout << "Withdrawal of " << amount << " successful. New balance: " << account.balance;
      }
    }
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
  // public transaction methods
  void deposit(double amount);
  bool withdraw(double amount);
};