#include <iostream>
using namespace std;
enum Day {sunday = 0,monday= 1,tuesday = 2,wednesday = 3,thursday = 4,friday = 5,saturday = 6};


/*
 enums is a user-defined data type that
 consists of paired named-integer constants.
 Use case:switches dont allow for the direct comparison
with strings for case values and therefore using enums
is a perfect walkaround.
You can just use the integer relation for the cases too.
 */

int main () {
    Day today = wednesday;
    switch(today){
        case sunday: cout << "Today is Sunday\n";
        break;
        case monday: cout << "Today is Monday\n";
        break;
        case tuesday: cout << "Today is Tuesday\n";
        break;
        case wednesday: cout << "Today is Wednesday\n";
        break;
        case thursday: cout << "Today is Thursday\n";
        break;
        case friday: cout << "Today is Friday\n";
        break;
        case saturday: cout << "Today is Saturday\n";
        break;
    }
    return 0;
}
