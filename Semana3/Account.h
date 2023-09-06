#include <string>
#include <iostream>

using namespace std;

class Account {
    private:
    string name;
    int balance {0};
    int withdrawal;

    public:
    Account(string accountName, int initialBalance, int retiro)
    : name{accountName}{

    if(initialBalance < 0){
        balance = initialBalance;
    } 
    }
    void deposit(int depositAmount){
        if(depositAmount > 0){
            balance = balance + depositAmount;
        }
    }
    int getBalance() const{
        return balance;
    }
    void setName(string accountName){
        name = accountName;
    }
    string getName() const {
        return name;
    }
};