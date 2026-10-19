
#include <iostream>
using namespace std;

int main() {
    const int correctPIN = 1234;
    int pin, choice;
    double balance = 5000.0, amount;

    cout << "===== ATM SIMULATOR =====\n";
    cout << "Enter PIN: ";
    cin >> pin;

    if (pin != correctPIN) {
        cout << "Incorrect PIN. Access denied.\n";
        return 0;
    }

    do {
        cout << "\n1. Check Balance\n2. Deposit\n";
        cout << "3. Withdraw\n4. Exit\nChoice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Balance: Rs. " << balance << endl;
                break;
            case 2:
                cout << "Deposit amount: Rs. ";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Deposit successful.\n";
                } else cout << "Invalid amount.\n";
                break;
            case 3:
                cout << "Withdrawal amount: Rs. ";
                cin >> amount;
                if (amount <= 0) cout << "Invalid amount.\n";
                else if (amount > balance)
                    cout << "Insufficient funds.\n";
                else {
                    balance -= amount;
                    cout << "Withdrawal successful.\n";
                }
                break;
            case 4:
                cout << "Thank you for using the ATM.\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 4);

    return 0;
}
