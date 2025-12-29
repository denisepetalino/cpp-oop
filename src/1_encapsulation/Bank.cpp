#include "Bank.hpp"
#include <iostream>

void Bank::createAccount(const std::string& accountNumber, double initialBalance){
  BankAccount newAccount(accountNumber, initialBalance);
  bankAccounts.push_back(newAccount);
}

BankAccount* Bank::findAccount(const std::string& accountNumber){
  for(size_t i=0; i < bankAccounts.size(); ++i){
    if (bankAccounts[i].getAccountNumber() == accountNumber){
      return &bankAccounts[i];
    }
  }
  return nullptr;
}