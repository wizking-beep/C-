#include <iostream>
using namespace std;

/*
--> Local variables are declared inside a function or block
--> Global variables are declared outside of all other functions

In case of redefination of a global variable 
into a local variable the local variable is used 
first instead of the global one.
 */

 //this is a global variable
 int globNum = 10;
 
void printNum(int num);

int main () {

    //this is a local variable
    int myNum = 1;

    cout << "My number: " << myNum << '\n';
    printNum(myNum);

    return 0;
}

void printNum(int num) {
    int globNum = 5;
    /*notice here that the  local variable can only be accessed 
    only through the argument but you cannot use the 
    local variable myNum as the function is not aware of it*/
    cout << "Value from function: " << num << '\n';
    cout << "The local version of global variable: " << globNum << '\n';

    //scope resolution operator(for using the global value first)
    cout << "The  value of global variable: " << ::globNum << '\n';
}