#include <iostream>

/*
This is an alternative to the if statement
Mainly used when comparing a valuse against many matching cases
*/
int main () {

    int day;
    std::cout << "What is the day of the week today(Use a number): " << '\n';
    std::cin >> day;

    switch (day)
    {
    case 1:
        std::cout << "Monday!";
        break;
    case 2:
        std::cout << "Tuesday!";
        break;
    case 3:
        std::cout << "Wednesday!";
        break;
    case 4:
        std::cout << "Thursday!";
        break;
    case 5:
        std::cout << "Friday!";
        break;
    case 6:
        std::cout << "Saturday!";
        break;
    case 7:
        std::cout << "Sunday!";
        break;                
    default:
        std::cout << "You entered an invalid number";
        break;
    }
    return 0;
}