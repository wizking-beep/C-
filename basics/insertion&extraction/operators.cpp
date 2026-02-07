#include <iostream>

/*
cout << --->this is the insertion operator
cin >> ---->this is the insertion operator

to get input with spaces we use std::getline(std::cin,name)
 */

int main (){
    std::string name;

    std::string fullName;

    std::cout << "Enter your name: " << '\n';
    std::cin >> name; 

    std::cout << "Now give your last two names" << '\n';
    std::getline(std::cin >> std::ws,fullName);

    std::cout << "You entered: " << name << '\n';
    std::cout << "Your last two names are: " << fullName; 
    return 0;
}