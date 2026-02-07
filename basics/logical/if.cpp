#include <iostream>

/*
the if statement is used to evaluate some condition
this is the case for all logical operators
ternary operators can be used in place of the if/else
--> condition ? what should happen if condition is met : what should happen if not met;

for logical operators
&& ---> checks if two conditions are true
|| ---> checks if at least one of two conditions is true
! ---> reverses the logical state of its operand(it means not --> like not what is current)
*/

int main() {

    int age;

    std::cout << "Enter your age: " << '\n';
    std::cin >> age;

    if(age < 18){
        std::cout << "You are a minor" << '\n';
    }
    else if(age >= 18 && age < 30 ){
        std::cout << "You are a young adult" << '\n';
    } else{
        std::cout << "You are a fully grown human" << '\n';
    }

    //using ternary operator
    int grade = 75;

    grade >= 50 ? std::cout << "You passed!" : std::cout << "You failed";
    //also:
    //std::cout << (grade >= 50 ? "You have passed!" : "You have failed");

    return 0;
}