#include <iostream>
#include <string>
/*
Write a class that holds information about business letters you write. 
The class contains three private fields: the title and last name of the recipient 
and a count of how many letters have been sent. 
Include three functions in the public section of the class—one called 
setRecipient() to set the recipient data and increment the total letters sent,  
displayGreeting()function that displays a full letter salutation including a 
title, name, and comma, for example, “Dear Mr. Johnson,”. one to display 
the letter greeting , and one  displayCount()function that displays the count 
of the number of Letter objects that have been created
*/

class Letter {
    private:
    std::string title;
    std::string lastName;
    static int letterCount;
    public:
    void setRecipient(std::string t, std::string ln) {
        title = t;
        lastName = ln;
        letterCount++;
    }
    void displayGreeting() {
        std::cout << "Dear " << title << " " << lastName << "," << std::endl;
    }
    void displayCount() {
        std::cout << "Total letters sent: " << letterCount << std::endl;
    }

};

int Letter::letterCount = 0;

int main() {
    Letter letter1;
    letter1.setRecipient("Mr.", "Johnson");
    letter1.displayGreeting();
    letter1.displayCount();

    Letter letter2;
    letter2.setRecipient("Ms.", "Smith");
    letter2.displayGreeting();
    letter2.displayCount();

    return 0;
}   