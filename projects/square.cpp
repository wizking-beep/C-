#include <iostream>
/*
Write a complete class that contains a main function 
and at least two additional functions to compute the area and perimeter of a square. 
The program should ask the user to enter a double number corresponding to the 
side length of the square, and display the area and perimeter of the square on the 
screen
*/

class Square {
    private:
    double side = 0;

public:
    Square(double s) {
        side = s;
    }

    double getArea() {
        return side * side;
    }

    double getPerimeter() {
        return 4 * side;
    }

};

int main () {
    double side;

    std::cout << "Enter the side of square" << '\n';
    std::cin >> side;

    Square square(side);
    std::cout << "Area: " << square.getArea() << '\n';
    std::cout << "Perimeter: " << square.getPerimeter() << '\n';

    return 0;
}