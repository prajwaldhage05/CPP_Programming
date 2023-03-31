#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int acctNo;
    string customerName;
    double balance;
public:
    // constructors
    BankAccount() {
        acctNo = 0;
        customerName = "";
        balance = 0.0;
    }
    BankAccount(int a, string cn, double b) {
        acctNo = a;
        customerName = cn;
        balance = b;
    }
    // business logic methods
    void withdraw(double amt) {
        if (amt > balance) {
            cout << "Insufficient balance" << endl;
        } else {
            balance -= amt;
            cout << "Withdrawal successful" << endl;
        }
    }
    void deposit(double amt) {
        balance += amt;
        cout << "Deposit successful" << endl;
    }
    // display account details
    void display() {
        cout << "Account No: " << acctNo << endl;
        cout << "Customer Name: " << customerName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acct(12345, "John Smith", 1000.0);
    acct.display(); // should output: Account No: 12345 Customer Name: John Smith Balance: 1000
    acct.deposit(500.0);
    acct.display(); // should output: Account No: 12345 Customer Name: John Smith Balance: 1500
    acct.withdraw(2000.0); // should output: Insufficient balance
    acct.withdraw(1000.0);
    acct.display(); // should output: Account No: 12345 Customer Name: John Smith Balance: 500
    return 0;
}
