#include <iostream>
using namespace std;

/*
 Dynamic memory is memory that is allocated after the program
 is compiled and is running.
 The new operator is used for memory allocation in the heap
 rather than in the stack.
 This is useful when it is not certain hoe much memory
 will be needed such as when accepting user input
 */

int main () {
    int *pNum = NULL;
    pNum = new int;

    char *pGrades = NULL;
    int size;
    cout << "How many grades do you want to enter? \n";
    cin >> size;

    pGrades = new char[size];

    for (int i = 0; i < size; i++){
        cout << "Enter grade " << i+1 <<": ";
        cin >> pGrades[i];
    }

    for (int i = 0; i < size; i++){
        cout << "Grade " << i + 1 << ": " << pGrades[i] << "\n";
    }

    *pNum = 21;

    //cout << pNum << " Is the address\n";
    //cout << *pNum << " Is the value\n";

    delete pNum;
    delete pGrades;
    return 0;
}
