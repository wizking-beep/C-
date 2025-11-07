#include <iostream>

/*
Converting the value of one data type to another
Implicit -->This happens automatically
Explicit -->Precede the value with a new data type
 */
int main() {

    //implicit cast
    int pi = 3.14;
    std::cout << "This is the output formatted to an int from a decimal input: " << pi << '\n';

    //explicit cast
    std::cout << "This is an integer casted into a character explicitly: " << (char)pi << '\n';


    //used in situation where a calculation involving other data types causes a wrong value
    int marks = 415;
    int totalMarks = 500;

    double score = marks/totalMarks * 100;
    std::cout << "This is the wrong calculation: " << score << "%" << '\n'; 

    double correctScore = marks/(double)totalMarks *100;
    std::cout << "This is the correct calculation after casting: " << correctScore << "%" << '\n';
    return 0;
}