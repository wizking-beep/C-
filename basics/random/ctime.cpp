#include <iostream>
#include <ctime>

using namespace std;

int main () {
//used for pseudo-random numbers
    srand(time(NULL));

    int random = rand();

    //random number between one and six
    int randBtwn = (rand()%6) + 1 ;
    
    cout << "Generating a random number: " << random << '\n';
    cout << "Generating a random number btwn 1 and 6: " << randBtwn << '\n';
    return 0;
}