#include <iostream>
#include "Bank.hpp"

using namespace std;

int main() {
  Bank bank;

  bank.createAccount("1001", 5000.0);
  bank.createAccount("1002", 3000.0);
  bank.createAccount("1003", 2000.0);

  BankAccount* account1 = bank.findAccount("1001");
  if (account1 != nullptr) {
    account1->deposit(1000.0);
  }

  BankAccount* account2 = bank.findAccount("1002");
  if (account2 != nullptr) {
    account2->withdraw(500.0);
  }

  int result = bank.transferMoney("1001", "1002", 1000.0);

  if (result == 1){
    std::cout << "Transfer successful.\n";
  } else if (result == 2){
    std::cout << "Transfer failed: one or both accounts were not found.\n";
  } else if (result == 3){
    std::cout << "Transfer failed: insufficient funds.\n";
  }

  return 0;
}
