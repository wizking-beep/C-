#include <iostream>
#include <vector>

//Variables are data stores
/*
------------- These are the variables in C++ ---------
int ==>These are whole numbers
double ==>This is a data store for numbers that include decimals
char ==> THis is used to store a single character
boolean ==> This are variables that allows for two states,either true or false
string ==> This is ised to store multiple characters,they are objects storing
a sequence of text
 */

//---------These are namespaces----------
namespace first{
    int goals = 10;
}

namespace second{
    int goals = 25;
}

//----------THis is a typedef--------
typedef std::vector<std::pair<std::string,int>> pairlist_t;//this is cumbersome to write everytime

typedef std::string text_t;


int main(){
    //declaration
    int score;
    int year = 2025;
    double price = 50.67;
    char grade = 'B';
    bool allowed = false;
    std::string name = "Brian";

    //assignment
    score = 4;

    //output
    std::cout << "This is the score using as an integer: " << score << '\n';
    std::cout << "This is the year as an integer too: " << year << '\n';
    std::cout << "THis is a double: " << price << '\n';
    std::cout << "This is a character: " << grade << '\n';
    std::cout << "This is a boolean: " << allowed << '\n';
    std::cout << "This is a string: " << name << '\n';

    //The keyword const(This is used to make a variable immutable)
    //In the example below the value UNIT cannot be changed(It becomes read only),it will throw an error on reassignment
    const std::string UNIT = "Engineering";

    std::cout << "This cannot be altered: " << UNIT << '\n';

    /*namespaces this allows for sharing of names by two or more enities
    Such as redeclaration of a variable using the same name such as x 
    It defaults to a local redeclaration but you can use:
    `using namespace first` to add a default namespace
    */
    
    int goals = 0;

    std::cout << "Am displaying the local value: " << goals << '\n';
    std::cout << "am displaying the 1st namespace value: " << first::goals << '\n';
    std::cout << "This is the second namespace value: " << second::goals << '\n';


    /*
    the keyword typedef is used to create a new identifier for an existing type
    helping with readablity and reducing typos
    Such as a very long data variable declaration as shown by the vector above
    You can just use the namespace in place of this such as 
    `using text_t = std::string`
     */
    pairlist_t pairlist;
    text_t myName = "Brian";
    std::cout << "This is a value using a typedef: " << myName <<'\n';

    return 0;
}