#include <iostream>

/*
Find the sum of all even numbers from 1 to 1900000000 and also sum of odd for the same interval
*/

int LAST_NUMBER = 1900000000;

int findEven(){
    int sum = 0;
    for(int i=0;i<LAST_NUMBER;i++) {
        if((i&1) == 0){
            sum+=i;
        }
    }

    return sum;
}

int findOdd() {
    int sum = 0;
    for(int i=0; i<LAST_NUMBER; i++){
        if((i&1)==1){
            sum+=i;
        }
    }

    return sum;

}

int main () {

    std::cout << "This is the even sum: " << findEven() << '\n';
    std::cout << "This is the odd sum: " << findOdd() << '\n';

    return 0;
}