#include <iostream>
using namespace std;

/*
 Passing a struct as an argument of a function
 When the struct is passed as an argument we are creating
 we are creating a copy of the struct,so you cant employ
 mutation of the initial one.
 To use the exact same one then use the & operator on the
 argument part.
 */

struct Car {
    string model;
    int year;
    string color;
};

void printCar(Car &car);
void paintCar(Car &car, string color);

int main () {
    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2004;
    car1.color = "Black";

    car2.model = "Dodge";
    car2.year = 2016;
    car2.color = "White";

    printCar(car1);
    printCar(car2);

    paintCar(car1,"Yellow");
    printCar(car1);

    return 0;
}

void printCar(Car &car) {
    cout << car.model << '\n';
    cout << car.year << '\n';
    cout << car.color << '\n';
}

void paintCar(Car &car, string color){
    car.color = color;
}
