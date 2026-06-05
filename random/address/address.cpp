#include <iostream>
#include <vector>
#include <string>

void checkAddress(const std::vector<int> &numbers);
void checkAddress(std::string);
void checkAddress(int *number);
void checkAddress(char letters[5]);


int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    checkAddress(numbers);

    std::string name = "Brian";
    checkAddress(name);

    int number = 30;
    /*int *age = &number;

    std::cout << "The address for number is: " << age << std::endl;
    std::cout << "The address for age is: " << &age << std::endl;
    std::cout << "The value for age is: " << *age << std::endl;
    */
    checkAddress(&number);

    char letters[5] = {'H', 'e', 'l', 'l', 'o'};
    checkAddress(letters);

    return 0;
}

void checkAddress(const std::vector<int> &numbers){
    //lets check the address of the vector
    for(auto number : numbers){
         std::cout << number << std::endl;
    }
}

void checkAddress(std::string name){
    std::cout << "This is the address for the string: " << name << std::endl;
}

void checkAddress(int *age){
    std::cout << "This is the address for age: " << age << std::endl;
}

void checkAddress(char letters[5]){
    std::cout << "THis is the address for fixed array: " << letters[1] << std::endl;
}
