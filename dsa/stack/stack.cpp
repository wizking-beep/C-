#include "stack.h"

void Stack::push(int data){
    if(!isFull()){
        array[++topOfStack] = data;
        std::cout << "Pushed " << data << " ontop" << '\n';
        print();
    } else {
        std::cout << "Error: Array is full" << '\n';
        exit(EXIT_FAILURE);
    }
}

int Stack::peek(){
    if(!isEmpty()){
        return array[topOfStack];
    } else {
        std::cout << "Stack is empty" << '\n';
        exit(EXIT_FAILURE);
    }
}

void Stack::pop(){
    if(!isEmpty()){
        array[topOfStack--] = 0;
        std::cout << "Popped" << '\n';
    } else{
        std::cout << "Stack is empty" << '\n';
        exit(EXIT_FAILURE);
    }
}

void Stack::clear(){
    while(!isEmpty()){
        pop();
    }
}

void Stack::print(){
    std::cout << "Stack: ";
    for(int i = 0; i <= topOfStack; i++){
        std::cout << array[i] << " ";
    }
    std::cout << '\n';
}

bool Stack::isEmpty(){
    return topOfStack == -1;
}

bool Stack::isFull(){
    return topOfStack == size - 1;
}