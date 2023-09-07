#include "Account.h"
#include <iostream>


using namespace std;

int main() {
    Account account1{ "Jane Green", 50, 200 };
    cout << "\n";
    Account account2{ "Jhon Blue", -7, 200 };

    cout << "account1: " << account1.getName() << "Balance is $" << account1.getBalance() << endl; //<< "The whithdrawal is: " << account1.getwithdrawal() << "\n";
    cout << "account2: " << account2.getName() << "Balance is $" << account2.getBalance(); //<< "The whithdrawal is: " << account2.getwithdrawal() << "\n";
   
    cout << "\n\nEnter deposit amount for account1: ";
    int depositAmount;
    cin >> depositAmount;
    cout << "adding " << depositAmount << "to account1 balance" << "\n";
    account1.deposit(depositAmount);

    cout << "\n\account1: " << account1.getName() << "Balance is $" << account1.getBalance();
    cout << "\n\account2: " << account2.getName() << "Balance is $" << account2.getBalance() << endl;

    cout << "\n\enter deposit amount for account 2: ";
    cin >> depositAmount;
    cout << "\n";
    cout << "adding" << depositAmount << "to account2 balance";
    account2.deposit(depositAmount);

    cout << "\naccount1: " << account1.getName() << "Balance is $" << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << "Balance is $" << account2.getBalance() << endl;

    cout << "\n\nEnter whithdrawal amount for account1: ";
    int whithdrawal;
    cin >> whithdrawal;
    cout << " resta " << whithdrawal << "to account1 whithdrawal" << "\n";
    account1.retiro(whithdrawal);
    cout << "\n";

    cout << "\n\nEnter whithdrawal amount for account2: ";
    cin >> whithdrawal;
    cout << " resta " << whithdrawal << " to account2 whithdrawal" << "\n";
    account2.retiro(whithdrawal);
    
    cout << "\n";
    
    cout << "\naccount1: " << account1.getName() << "The whithdrawal is $" << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << "The whithdrawal $" << account2.getBalance() << endl;

    return 0;
}
