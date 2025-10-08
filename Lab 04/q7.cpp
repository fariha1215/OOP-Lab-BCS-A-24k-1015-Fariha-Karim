#include <iostream>
using namespace std;

class SecureBankAccount {
private:
    int accountNumber;
    double balance;
    const string accountType;
    int* logHistory;

public:
    SecureBankAccount(int accountNumber, double initialBalance, const string& type, int logSize)
        : accountType(type)
    {
        this->accountNumber = accountNumber;
        this->balance = initialBalance;

        if (initialBalance < 500.0) {
            cout << "Error: Initial balance must be at least 500 PKR." << endl;
            this->balance = 500.0;
        }

        logHistory = new int;
        *logHistory = logSize;
    }

    SecureBankAccount(const SecureBankAccount& other)
        : accountType(other.accountType)
    {
        this->accountNumber = other.accountNumber;
        this->balance = other.balance;
        logHistory = new int;
        *logHistory = *(other.logHistory);
    }

    ~SecureBankAccount() {
        delete logHistory;
        cout << "Account " << accountNumber << " resources released." << endl;
    }

    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: " << balance << endl;
        cout << "Log History Size: " << *logHistory
             << " (Address: " << logHistory << ")" << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    cout << "=== Creating Original Account ===" << endl;
    SecureBankAccount acc1(1001, 600.0, "Current", 5);
    acc1.display();

    cout << "=== Creating Deep Copy ===" << endl;
    SecureBankAccount acc2 = acc1;
    acc2.display();

    cout << "=== Modifying Original's Log History ===" << endl;
    SecureBankAccount acc3(1002, 800.0, "Current", 10);
    acc3.display();

    return 0;
}
