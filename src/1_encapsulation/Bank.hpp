#include <vector>
#include "BankAccount.hpp"

class Bank{
  private:
  std::vector<BankAccount> bankAccounts;
  public:
  void createAccount(const std::string& accountNumber, double initialBalance);
  BankAccount* findAccount(const std::string& accountNumber);
  int transferMoney(const std::string& sourceAccountNumber, const std::string& destinationAccountNumber, double amount);
};