#include <iostream>
using namespace std;

/*
 This operator determines the size in bytes of a
 variable, data type, class, objects etc.
 */

int main () {

    double marks = 55;
    string name = "Brian";
    char grades[] = {'A','B','C','D'};

    cout << sizeof(marks) << "bytes\n";
    cout << sizeof(name) << "bytes\n";
    cout << sizeof(grades) << "bytes\n";

    return 0;
}
