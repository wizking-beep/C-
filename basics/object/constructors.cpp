#include <iostream>
using namespace std;

/*
 A constructor is a special method which is called
 when an object is instantiated.
 Its useful for assigning values to attributes as arguments.
 The this keyword is needed when the argument naming is just
 the same as the attributes,otherwise you can do away with it if
 the arguments are named differently from the attributes in the class.
 */

class Car {
    public:
    string model;
    int year;
    double plate;

    Car(string model,int year, double plate){
        this->model = model;
        this->year = year;
        this->plate = plate;
    }
};

int main () {
    Car car1("Dodge",2006,56.98);

    cout << "Model: " << car1.model << '\n';
    cout << "Year: " << car1.year << '\n';
    cout << "Plate: " << car1.plate << '\n';

    return 0;
}
