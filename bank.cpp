#include <iostream>
using namespace std;

void showBalance(double balance);
double deposit();
double withdraw();

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
    switch (choice) {
        case 1: showBalance(balance);
        break;
        case 2: balance += deposit();
        break;
        case 3: balance -= withdraw();
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

double deposit(){
    return 0;
};

double withdraw(){
    return 0;
};