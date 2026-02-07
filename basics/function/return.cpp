#include <iostream>

using namespace std;

double calculateArea(double length,double width);

int main () {
    double l,w;

    cout << "Enter the length: " << '\n';
    cin >> l ;

    cout << "Enter the width: " << '\n';
    cin >> w;
    cout << "THis is the area: " << calculateArea(l,w);
    return 0;
}

double calculateArea(double length,double width){
    return length * width;
}