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

int Bank::transferMoney(const std::string& sourceAccountNumber, const std::string& destinationAccountNumber,double amount){
  BankAccount* source = findAccount(sourceAccountNumber);
  BankAccount* destination = findAccount(destinationAccountNumber);
  
  if (source == nullptr || destination == nullptr) {
    return 2;
  }
  if (amount <= 0) {
    return 3;
  }
  if (source->getBalance() < amount) {
    return 3;
  }
  bool withdrew = source->withdraw(amount);
  if (!withdrew) {
    return 3;
  }
  destination->deposit(amount);
  return 1;
}