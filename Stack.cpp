#include <iostream>
using namespace std;

class Stack{
    int *arr;
    int top;
    int capacity;
    
    public:
    Stack(int size){
        arr = new int[size];
        capacity = size;
        top = -1;
    }
    
    //push operation 
    
    void push(int element){
        if(top == capacity - 1){
            cout <<"stack overflow \n";
            return;
        }
        arr[++top] = element;
    }
    
    //pop operation
    
    int pop(){
        if(top == -1){
            cout<<"stack overflow \n";
            return -1;
        }
        return arr[top--];
    }
    
    //peek operation(returns the top most value)
    int peek(){
        if(top == -1){
            cout <<"stack overflow \n";
            return -1;
        }
        return arr[top];
    }
    
    bool isEmpty(){
        return top == -1;
    }
    
    bool isFull(){
        return (top >= capacity -1);
    }
    
};

int main(){
    Stack s(5);
    
    s.push(5);
    s.push(5);
    s.push(5);
    s.push(5);
    s.push(5);
    s.push(5);
    
    // s.pop();
    // s.pop();
    // s.pop();
    
    if(s.isFull()){
        cout << "stack is full";
    }
    else{
        cout << "stack is empty";
    }
    
}