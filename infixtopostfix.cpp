#include <iostream>
using namespace std;

//defining stack with class
class Stack{
    char *arr;
    int top=-1;
    int capacity;
public:
    Stack(int n=5){
        arr = (char *)calloc(n, sizeof(char));
        this->capacity = n;
    }
    
    //function to find peek
    char peek(){
        if(isEmpty()){
            cout << "Stack Underflow" << endl;
            exit(0);
        }else{
            return arr[top];
        }
    }
    
    //function to get top value
    int getTop(){
        return top;
    }
    
    //function to get value
    char getElementAt(int n){
        return arr[n];
    }
    
    //check if stack is empty or not
    bool isEmpty(){
        return top==-1;
    }
    
    //check if stack is full or not
    bool isFull(){
        return top==capacity-1;
    }
    
    //function to push value in stack
    void push(char ch){
        if(isFull()){
            cout << "Stack overflow" << endl;
        }else{
            arr[++top] = ch;
        }
    }
    
    //function to pop value from stack
    char pop(){
        if(isEmpty()){
            cout << "Stack Underflow" << endl;
            exit(0);
        }else{
            return arr[top--];
        }
    }
};

int main() {
    //incomplete code
    return 0;
}
