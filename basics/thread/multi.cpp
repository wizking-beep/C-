#include <iostream>
#include <thread>

/*
Multithreading is the ability of multiple parts of a program
to be executed at the same time.
Handling tasks as such includes: 1.multitasking 2.multithreading
In multitasking the computer switches through tasks of the 
program,like doing one thing then another during a timeframe
though not concurrently just like the literal meaning
of the word itself
In multithreading the code is designed such that,individual
parts of the program can be executed at the same time,so the
threads are handled by each core of the system when the pc
has more than one core
*/

//first function to print 250 heys
void function1(std::string word){
    for(int i=1; i<= 250; i++) {
        std::cout << word;
    }
}

//second prints yows
void function2(){
    for(int i=1; i<= 250; i++) {
        std::cout << "Yow";
    }
}

int main() {

    //first thread(notice how arguments are passed to functions in this case)
    std::thread worker1(function1,"Hey");

    //second thread
    std::thread worker2(function2);

    //windows way system("pause>nul");

    std::cin.get();

    return 0;
}