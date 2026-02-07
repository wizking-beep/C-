#include <iostream>
using namespace std;

/*
Overloaded functions share the same number, but have
a different set of paramters(these are the function signatures
which must be unique)
 */

void readLoud();
void readLoud(string book);
void readLoud(string song1, string song2);

int main () {
    readLoud();
    readLoud("Hellcat nation");
    readLoud("Dumb","Silence");
    return 0;
}

void readLoud(){
 cout << "Just reading out loud" << '\n';
};

void readLoud(string book) {
cout << "Reading the book: " << book << '\n';
}

void readLoud(string song1,string song2) {
    cout << "Reading the lyrics of two songs: " << song1 << " and " << song2;
}