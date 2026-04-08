#pragma once
#include <iostream>

class Stack {
    private:
    int *array;
    int topOfStack;
    int size;

    public:
    Stack(int s){
        size = s;
        array = new int[size]; 
        topOfStack = -1;
    }

    void push(int data);

    void pop();

    int peek();

    void clear();

    void print();

    private:
    bool isFull();
    bool isEmpty();
};