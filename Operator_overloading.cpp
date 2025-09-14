//Ananya Swadia
//24070123012

#include <iostream>
using namespace std;

class BankAccount {
    double balance;
public:
    BankAccount(double b=0) { balance = b; }

    BankAccount operator+(BankAccount const &obj) { 
        return BankAccount(balance + obj.balance);
    }

    void show() { cout << "Balance: " << balance << endl; }
};

int main() {
    BankAccount a1(5000), a2(3000);
    BankAccount a3 = a1 + a2;
    a3.show(); 
}
/* output 
Balance: 8000
*/
