#include <iostream>
using namespace std;

void showBalance(double balance);
double deposit(double balance);
double withdraw(double balance);

int main () {

    double balance = 0;
    int choice = 0;

    cout << "-----Choose an option-----" << '\n';
    cout << "1.Show Balance" << '\n';
    cout << "2.Deposit" << '\n';
    cout << "3.Withdraw" << '\n';
    cout << "4. Exit" << '\n';

do{
    cin >> choice;
    cin.clear();
    fflush(stdin);

    switch (choice) {
        case 1: showBalance(balance);
        break;
        case 2: balance += deposit(balance);
        break;
        case 3: balance -= withdraw(balance);
        break;
        case 4: cout << "Thanks for visiting!";
        break;
        default: cout << "Please enter a valid choice";
        break;
    }
} while (choice != 4);
    return 0;
}

void showBalance (double balance){
  cout << "THis is your balance: " << balance << '\n';
}

double deposit(double balance){
    double amount;
    cout << "Enter amount to deposit" << '\n';
    cin >> amount;
    cout << '\n' << "Successful deposit, your balance is: " << balance + amount << '\n';
    return amount;
};

double withdraw(double balance){
    double amount;
    cout << "Enter amount to withdraw" << '\n';
    cin >> amount;
    if(amount > balance){
        cout << "You have insufficient funds please top up your account." << '\n';
        return 0;
    } else if(amount < 0) {
        cout << "The amount you entered is invalid" << '\n';
        return 0;
    }
    cout << '\n' << "Successful withdrawal, your balance is: " << balance - amount << '\n';
    return amount;
};
