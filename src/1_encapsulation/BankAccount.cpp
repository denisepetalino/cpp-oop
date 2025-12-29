#include "BankAccount.hpp"

BankAccount::BankAccount(const std::string& bankAccountNumber, double bankBalance) : accountNumber(bankAccountNumber), balance(bankBalance){}

//getter methods
std::string BankAccount::getAccountNumber()
const{
  return accountNumber;
}

double BankAccount::getBalance()
const{
  return balance;
}

//setter methods
void BankAccount::setAccountNumber(const std::string& newAccountNumber){
  accountNumber = newAccountNumber;
}

void BankAccount::setBalance(double newBalance){
  balance = newBalance;
}

void BankAccount::deposit(double amount) {
  Transaction t(*this, amount);
  t.deposit();
}

bool BankAccount::withdraw(double amount) {
  Transaction t(*this, amount);
  return t.withdraw();
}