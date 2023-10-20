//
// Created by DELL on 19/10/2023.
//
#include <bits/stdc++.h>

using namespace std;

class BankAccount {
private:
    int balance;
public:
    BankAccount(int b) {
        balance = b;
    }

    void deposit(int amo) {
        balance += amo;
    }

    void withdrwal(int amo) {
        if (balance-amo > 0)
        balance -= amo;

        else cout << "Insufficient Balance" << endl;
    }

    void retriveBalance() const{
        cout << balance << endl;
    }
};

int main() {
    BankAccount b1(1234);

    b1.deposit(2000);
    b1.withdrwal(1000);

    b1.retriveBalance();

}