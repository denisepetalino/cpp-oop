#include <vector>
#include "BankAccount.hpp"

class Bank{
  private:
  std::vector<BankAccount> bankAccounts;
  public:
  void createAccount(const std::string& accountNumber, double initialBalance);
  BankAccount* findAccount(const std::string& accountNumber);
};