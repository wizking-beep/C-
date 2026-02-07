#include <iostream>
#include <cmath>

/*
-----std::max()-----
This is used for comaprison to get a greater number on comparison

----std::min()------
This is used for comaprison to get the smaller number

----------------From the <cmath> library----------------
===> pow() --->this is used to raise a number to the power
===> sqrt() ---> this is used to find the square root of a number
===> abs() --->this gives an absolute number
===> round() ---> rounds up a number as required mathematically
===> ceil() ---> this rounds up to the next number
===> floor() ---> this rounds down to the previous number
 */

int main() {
    double x = 2;
    double y = 20;

    double g = std::max(x,y);
    double s = std::min(x,y);
    double p = pow(8,3);
    double sq = sqrt(64);
    double ab = abs(-8);
    double rounded = round(5.7134);
    double next = ceil(3.14);
    double prev = floor(4.99);

    std::cout << "THis is the greater number: " << g << '\n';
    std::cout << "THis is the smaller number: " << s << '\n';
    std::cout << "This is 8 raised to power 3: " << p << '\n';
    std::cout << "This is square root of 64: " << sq << '\n';
    std::cout << "This is the absolute value of -8: " << ab << '\n';
    std::cout << "This is the rounded value of 5.7134: " << rounded << '\n';
    std::cout << "This is the rounded up value of 3.14: " << next << '\n';
    std::cout << "This is the rounded down value of 4.99: " << prev << '\n';

    return 0;
}