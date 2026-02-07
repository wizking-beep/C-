#include <iostream>

int main () {

    //this is the basic output printing
    std::cout << "This is the first c++ code";
    std::cout << "This is a hello world project of course";

    //this is the printing of new line using std::endl
    std::cout << "------This is output formatted in new lines-------" << std::endl;
    std::cout << "This is the first c++ code" << std::endl;
    std::cout << "This is a hello world project of course" << std::endl;

    //this is the same new line formatting using n
    std::cout << "------This is output formatted in new lines using '\n' -------" << std::endl;
    std::cout << "This is the first c++ code" << '\n';
    std::cout << "This is a hello world project of course" << '\n';

    return 0;
}