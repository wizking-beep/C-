#include <iostream>

/*
-----Arithmetic operators------
They return the result of a specific arithmetic operation
they include ( + - * /)
They follow the BODMAS in terms of precedence:
Bracket-->Division-->Multiplication-->Addition-->Subtraction

The increment operator is used to add by 1: such as below for marks
if we were adding just one we can do marks++

The decrement operator is used to subtract by 1: such as below for marks
if we were subtracting just one we can do marks--

The two operators above are great in loops during iterations
 */
int main(){
    int marks = 20;

    //marks = marks+30(shortened to use as below)
    marks+=30;
    std::cout << "This is the added marks: " << marks << '\n';

    //subtracting by 30
    marks-=20;
    std::cout << "The marks have been reduced by 20: " << marks << '\n';

    //multiplying by 2
    marks*=2;
    std::cout << "The result above was multiplied by two: " << marks << '\n';

    //dividing by 4(since its an int incase their is a decimal potion it gets truncated,you can use a double if in need of the decimal potion )
    marks/=4;
    std::cout << "THe result was dividing by 4: " << marks << '\n';

    // the modulus operator `%` shows the remainder
    int remainder = marks % 4;
    std::cout << "THis is the remainder of diving 15 by 4: " << remainder << '\n';
    return 0;
}