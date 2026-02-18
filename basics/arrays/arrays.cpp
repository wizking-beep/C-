#include <iostream>
using namespace std;

/*
 An array is a data structure that can store multiple
 values which can be accessed by an index number.
 They contain values that are of same data type.
 For value assigning later after declaration you need
 to add the size of the array(shown in fruits below)
 */

 double getTotalPrice(double prices[],int size);

int main () {
    string cars[] = {"Dodge","Mustang","Camry"};

    string fruits[5];
    fruits[0] = "mango";
    fruits[1] = "apple";
    fruits[2] = "grapes";
    fruits[3] = "cherries";
    fruits[4] = "kiwi";

    cout << cars[1] << '\n';

    cars[1] = "Jeep";

    cout << "Changing the value: " << cars[1] << '\n';
    cout << "Showing fruits: " << '\n';
    cout << fruits[0] << '\n';
    cout << fruits[1] << '\n';
    cout << fruits[2] << '\n';
    cout << fruits[3] << '\n';
    cout << fruits[4] << '\n';

    //looping through an array
    cout << "looping through the cars:\n";
    for(int i = 0; i < sizeof(cars)/sizeof(string); i++){
        cout << cars[i] << '\n';
    }

    //passing an array to a function
    double prices[] = {45.00,78.89,65.40,30.42};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotalPrice(prices,size);
    cout << "Total value, ksh: " << total << '\n';

    return 0;
}

double getTotalPrice(double prices[],int size) {
    double total = 0;

    for(int i = 0; i < size ; i++){
        total += prices[i];
    }

    return total;
}
