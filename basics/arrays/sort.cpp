#include <iostream>
using namespace std;

//this a bubble sort algorithm
void sort(int array[], int size);

int main () {

    int array[] = {89,90,1,7,8,50,30,3,1,79};
    int size = sizeof(array)/sizeof(array[5]);
    sort(array,size);

    for (int element : array) {
        cout << element << " ";
    }
    return 0;
}

void sort(int array[], int size){
    int temp;

    for(int i = 0; i < size-1; i++){
        for (int j = 0; j < size-i-1; j++){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}
