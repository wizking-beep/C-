#include <iostream>
using namespace std;

int searchNumbers (int array[], int size, int element);
int searchCars (string array[], int size, string element);

int main () {
    //number searching
    int numbers[]= {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int myNum;

    cout << "Enter element to search for: " << '\n';
    cin >> myNum;
    cin.ignore();

    index = searchNumbers(numbers,size,myNum);

    if(index != -1){
        cout << "\nIndex of the number: " << myNum << " is " << index << '\n';
    } else {
        cout << "The number entered is not in the array\n";
    }

    //string searching
    string cars[] = {"mazda","bentley","mercedes","ferrari","lambo","dodge","ford"};
    int sizeCars = sizeof(cars)/sizeof(cars[3]);
    string myCar;
    int indexOfCar;

    cout << "Enter the car to search for: " << '\n';
    getline(cin,myCar);

    indexOfCar = searchCars(cars,sizeCars,myCar);

    if(indexOfCar != -1){
        cout << "\nIndex of the car: " << myCar << " is " << indexOfCar << '\n';
    } else {
        cout << "The car entered is not in the array";
    }



    return 0;
}

int searchNumbers (int array[], int size, int element) {
    for(int i =0; i < size; i++) {
        if(array[i] == element){
            return i;
        }
    }

    return -1;
}

int searchCars(string array[],int size,string element) {
    for(int i =0; i < size; i++) {
        if(array[i] == element){
            return i;
        }
    }

    return -1;
}
