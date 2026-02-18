#include <iostream>
using namespace std;

/*
 The fill function is used to fill a range of elements
 withing a specified value.
 The usecase is for repeating value addition,also you can
 fill to particular size then pick up from the size and continue
 to the end(employ division on the size as needed)
 fill(begin,end,someValue)
 */

int main () {

    const int SIZE = 15;
    string fruits[SIZE];

    fill(fruits,fruits+SIZE,"mango");

    for(string fruit : fruits){
        cout << fruit << '\n';
    }

    //example of the sequential filling
    string cars[SIZE];

    fill(cars,cars+(SIZE/3),"mustang");
    fill(cars + (SIZE/3), cars + (SIZE/3)*2 ,"lambo");
    fill(cars + (SIZE/3)*2, cars + SIZE ,"aston");

    for(string car : cars){
        cout << car << '\n';
    }

    return 0;
}
