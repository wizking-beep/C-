#include <iostream>
using namespace std;

/*
 This is a programming technique where a function
 calls itself from within to solve a complex problem
 by breaking it into repeatable single steps.
 You need a base case to break out of the recursion
 The disadvantage is that it takes more memory.
 */

void iterativeWalk(int steps);
void recursiveWalk(int steps);
int iterativeFactorial(int num);
int recursiveFactorial(int num);

int main () {
    //iterativeWalk(100);
    //recursiveWalk(100);
    cout << iterativeFactorial(12) << '\n';
    cout << recursiveFactorial(12);
     //recursiveFactorial(12);
    return 0;
}

void iterativeWalk(int steps){
    for(int i = 0; i < steps; i++){
        cout << "Step: " << i + 1 << '\n';
    }
}

void recursiveWalk(int steps) {
    if(steps > 0) {
        cout << "Step: " << steps << '\n';
    }
    recursiveWalk(steps-1);
}

int iterativeFactorial(int num) {
    int result = 1;
    for (int i = 1; i <= num; i++) {
        result =  result * i;
    }

    return result;
}

int recursiveFactorial(int num) {
    if(num > 1) {
        return num * recursiveFactorial(num -1);
    } else {
        return 1;
    }
}
