#include <iostream>

using namespace std;

class Bank {
  private:
    double balance;

  public:
    Bank();
    Bank(double defaultBalance);

    void deposit(double depositAmount);
    void withdraw(double withdrawAmount);
    void print_balance();
};

Bank::Bank() {
  balance = 0;
}

Bank::Bank(double defaultBalance) {
  balance = defaultBalance;
}

void Bank::deposit(double depositAmount) {
  balance = balance + depositAmount;
}

void Bank::withdraw(double withdrawAmount) {
  balance = balance - withdrawAmount;
}

void Bank::print_balance() {
  cout << "Your account balance is: Rp. " << balance << endl;
}

int main()
{
  int menuChoice;
  double amountToBeDeposit, amountToBeWithdraw;

  Bank studentAccount;

  do {
    // menu
    cout << "=====================" << endl;
    cout << "Bank Application Menu" << endl;
    cout << "=====================" << endl;
    cout << "1. Deposit" << endl;
    cout << "2. Withdram" << endl;
    cout << "3. Print Balance" << endl;
    cout << "4. Exit" << endl;

    cout << "Enter your choice: "; cin >> menuChoice;

    switch(menuChoice) {
      case 1:
        cout << "Enter amount to be deposited: "; cin >> amountToBeDeposit;
        studentAccount.deposit(amountToBeDeposit);
        cout << "Success Deposit" << endl;
        break;
      case 2:
        cout << "Enter amount to be withdrawn: "; cin >> amountToBeWithdraw;
        studentAccount.withdraw(amountToBeWithdraw);
        cout << "Success Withdraw" << endl;
        break;
      case 3:
        studentAccount.print_balance();
        break;
      case 4:
        cout << "Thank you for using our Bank Application. See you again!" << endl;
        break;
      default:
        cout << "Your choice is not available.";
        break;
    }
  } while(menuChoice != 4);

  return 0;
}
