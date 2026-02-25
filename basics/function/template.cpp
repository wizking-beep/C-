#include <iostream>
using namespace std;
template <typename T>

/*
 A template function is one which can handle several
 data types
 If you want to allow for different data types then
 you can make another typename such as lets say U so
 that: template <typename T,typename U >
 Then pass the U as the other argument such as lets say
 y will be assigned U.
 max(T x, U y)
 Then in the main function use the keyword auto so the function
 returns the data type needed
 so implementation
 auto max(T x, U y)
 Then it will return the expected data type
 */
T max(T x ,T y){
    return (x > y) ? x : y;
}

int main () {
    cout << ::max(2,5) << '\n';
    cout << ::max(2.1,5.4) << '\n';
    cout << ::max('9','4') << '\n';

    return 0;
}
