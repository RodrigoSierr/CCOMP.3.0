#pragma once
#include <iostream>
#include <string>

using namespace std;

class lista {
private:
    unsigned int AccountNumber;
    std::string firstName;
    std::string lastName;
    double Balance;

public:
    lista() : AccountNumber(0), firstName(""), lastName(""), Balance(0.0) {
    }

    lista(unsigned int CuenNum, std::string first, std::string last, double balance_)
        : AccountNumber(CuenNum), firstName(first), lastName(last), Balance((balance_ > 0) ? balance_ : 0.0) {
    }

    void setAccountNumber(unsigned int CuenNum) {
        AccountNumber = CuenNum;
    }

    void setfirstName(std::string first) {
        firstName = first;
    }

    void setlastName(std::string last) {
        lastName = last;
    }

    void setBalance(double balance_) {
        Balance = (balance_ > 0) ? balance_ : 0.0;
    }

    unsigned int getAccountNumber() {
        return AccountNumber;
    }

    std::string getfirstName() {
        return firstName;
    }

    std::string getlastName() {
        return lastName;
    }

    double getBalance() {
        return Balance;
    }
    void display() {
        cout << "Su numero de cuenta es: " << getAccountNumber() << "\n";
        cout << "Nombre del Usuario: " << getfirstName() << " " << getlastName() << "\n";
        cout << "Su balance es: " << getBalance() << "\n";
    }
};

