#include "Bank.hpp"
#include <iostream>

void Bank::createAccount(const std::string& accountNumber, double initialBalance){
  BankAccount newAccount(accountNumber, initialBalance);
  bankAccounts.push_back(newAccount);
}