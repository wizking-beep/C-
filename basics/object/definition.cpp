#include <iostream>
using namespace std;

/*
 An object is a collection of attributes and methods.
 Objects: -Can have characteristics and could perform actions.
 -Can be used to mimic real world items.
 Objects are created from a class which acts as a blue print.
 A method is a function that is contained in a class.
 You can assign default values to the attributes.
 */

class Human {
    public:
    //attributes
    string name;
    string occupation;
    int age;

    //methods
    void eat () {
        cout << "I can eat\n";
    }

    void drink () {
        cout << "I can drink\n";
    }

    void sleep () {
        cout << "I can sleep\n";
    }
};

int main () {
    //creating object
    Human human1;
    human1.name = "Brian";
    human1.occupation = "Engineer";
    human1.age = 21;

    cout << human1.name << '\n';
    cout << human1.occupation << '\n';
    cout << human1.age << '\n';

    human1.eat();

    return 0;
}
