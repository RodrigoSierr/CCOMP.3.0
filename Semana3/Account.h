#pragma once
#include <string>
#include <iostream>

using namespace std;

class Account {
private:
    string name;
    int balance{ 0 };
    int withdrawal;

public:
    Account() {
        name = "";
        balance = 0;
        withdrawal = 0;
    }

    Account(const string accountName, int initialBalance, int IntialWithdrawal) {
        name = accountName;
        balance = (initialBalance > 0) ? initialBalance : 0;
        withdrawal = IntialWithdrawal;
    }
   
   

  void deposit(int depositAmount) {
        if (depositAmount > 0) {
            balance = balance + depositAmount;
        }
    }
    int getBalance() const {
        return balance;
    }
    void setName(string accountName) {
        name = accountName;
    }
    string getName() const {
        return name;
    }
    /*(Clase Cuenta Modificada) Modificar la clase Cuenta (Fig. 3.8) para proporcionar una función miembro
llamada retirar que retire dinero de una Cuenta. Asegúrese de que el importe retirado no
no supere el saldo de la Cuenta. Si lo hace, el saldo no debe modificarse y la función miembro
debe mostrar un mensaje indicando "El importe retirado excede el saldo de la cuenta".
Modifique la clase AccountTest (Fig. 3.9) para probar la función miembro retirar.*/
    
    void retiro(int withdrawalAmount) {
        if (withdrawalAmount > 0 && withdrawalAmount <= balance) {
            balance -= withdrawalAmount;
        }
        else {
            cout << "Retiro no válido. El saldo actual es insuficiente o el monto de retiro es negativo." << endl;
        }
    }
     int getwithdrawal() {
        return withdrawal;
    }
    void setwithdrawal(int InitialWithdrawal) {
        withdrawal = InitialWithdrawal;
    }
};
