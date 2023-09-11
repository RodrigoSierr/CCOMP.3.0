#include <iostream>
#include <string>

using namespace std;

class Account {
private:
    string name;
    int balance{ 0 };
    int retiro;

public:
    Account() {
        name = "";
        balance = 0;
        retiro = 0;
    }
    Account(string user, int monto, int salida)
        : name(user), balance(monto), retiro(salida) {
        balance = (monto > 0) ? monto : 0;
    }
    void setname(string user) {
        name = user;
    }
    void setbalance(int monto) {
        balance = (monto >= 0) ? monto : 0;
    }
    void setretiro(int salida) {
        retiro = (salida >= 0) ? salida : 0;
    }

    string getname() {
        return name;
    }
    int getbalance() {
        return balance;
    }
    int getretiro() {
        return retiro;
    }

    void deposit(int MontoDeposito) {
        if (MontoDeposito > 0) {
            balance = balance + MontoDeposito;
        }
    }
    void sacar(int ret) {
        if ((ret > 0) && (ret <= balance)) {
            balance = balance - ret;
        }
        else {
            cout << "Retiro no válido. El saldo actual es insuficiente o el monto de retiro es negativo." << "\n";
        }
       
    }
    bool reti(string i) {
        if (i == "si") {
            cout << "Ingrese el monto que desea retirar: ";
            return true;
        }
        else if (i == "no") {
            cout << "\t" << "ACABO LA TRANSACCION" << "\n";
            return false;
        }
    }


    void Display() {
        cout << "User1:" << getname() << " su balance es $" << getbalance() << "\n";

        cout << "\n";
        cout << "Ingrese el monto que se agregará a su cuenta: ";

        int depositAmount;
        cin >> depositAmount;

        deposit(depositAmount);

        cout << "Agregando $" << depositAmount << "\n" << "Su nuevo balance es: " << getbalance() << "\n";
       
        string i;
        cout << "Desea retirar dinero?" << endl;
        cin >> i;
        reti(i);
            
        
        
        int withdrewel;
        cin >> withdrewel;

        sacar(withdrewel);

        cout << "Retirando $" << withdrewel << "\n" << "Su nuevo balance es: " << getbalance() << "\n";

        cout << "\n";

        cout << "\t" << "ACABO LA TRANSACCION" << "\n";
        


        //cout << "Ingrese el monto que desea retirar: ";

       
    }
};

