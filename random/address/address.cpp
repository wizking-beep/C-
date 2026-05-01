#include <iostream>
#include <vector>
#include <string>

void checkAddress(std::vector<int>);
void checkAddress(std::string);
void checkAddress(int);
void checkAddress(char letters[5]);


int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    checkAddress(numbers);

    std::string name = "Brian";
    checkAddress(name);

    int number = 30;
    int *age = &number;

    std::cout << "The address for number is: " << age << std::endl;
    std::cout << "The address for age is: " << &age << std::endl;
    std::cout << "The value for age is: " << *age << std::endl;
    //checkAddress(*age);

    char letters[5] = {'H', 'e', 'l', 'l', 'o'};
    checkAddress(letters);

    return 0;
}

void checkAddress(std::vector<int> numbers){
    std::cout << numbers[1] << std::endl;
}

void checkAddress(std::string name){
    std::cout << name << std::endl;
}

void checkAddress(int age){
    std::cout << age << std::endl;
}

void checkAddress(char letters[5]){
    std::cout << letters[1] << std::endl;
}
