#include <iostream>

using namespace std;
//a function is ablock of reusable code

/*initializing before declaration(this is for defining before main function)
This allows such that the definition can be done outside the main
function
*/
void initialised();
void passArguments(string text);

void showText (){
    cout << "THis is the text from a function" << '\n';
}

int main () {
    showText();
    initialised();
    passArguments("THis is the passed argumnet");
    return 0;
}

void initialised () {
    cout << "INitialised out of the main function" << '\n';
}

void passArguments (string text) {
    cout << text;
}