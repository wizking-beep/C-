#include <iostream>
using namespace std;

/*
 Inheritance is when a class can receive attributes and methods
 from another class.
 The receiving class is the child class while the other is the
 parent.
 It helps in the reusing of similar code found within multiple
 classes.
 */

class Animal{
    public:
    bool alive = true;

    void eat(){
        cout << "The animal eats\n";
    }
};

class Dog : public Animal {
    public:
    void bark(){
        cout << "The dog barks\n";
    }
};

class Cat : public Animal {
    public:
    void meow(){
        cout << "The cat meows\n";
    }
};

int main () {
    Dog bosco;
    Cat kitten;

    cout << bosco.alive << '\n';
    bosco.eat();
    bosco.bark();

    kitten.eat();
    kitten.meow();
    return 0;
}
