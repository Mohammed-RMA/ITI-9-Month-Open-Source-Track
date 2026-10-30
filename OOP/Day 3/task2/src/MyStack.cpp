#include "MyStack.h"
#include <bits/stdc++.h>
using namespace std;

MyStack::MyStack() {
    top = -1;
    size = 10;
    arr = new int[size];
}
void MyStack::push(int data) {

    if (top < size - 1) {
        top++;
        arr[top] = data;
    }
    else {
        cout << "Stack is full" << endl;
    }
}

bool MyStack::pop( int &d) {

    if (top > -1) {
        d=arr[top--];
        return 1;
    }
    else {
        cout << "Empty stack" << endl;
        return 0;
    }
}

MyStack::MyStack(const MyStack & s){
     top = s.top;
    size = s.size;
    arr = new int[size];
    for(int i=0;i<=top;i++){
        arr[i]=s.arr[i];
    }
}

MyStack& MyStack::operator=(const MyStack& s) {
        delete[] arr;
        top = s.top;
        size = s.size;
        arr = new int[size];
        for (int i = 0; i <= top; i++) {
            arr[i] = s.arr[i];
        }
    return *this;
}
MyStack MyStack::operator+(const MyStack &s){
       MyStack result;

    delete[] result.arr;

    result.size = size + s.size;
    result.arr = new int[result.size];

    for (int i = 0; i <= top; i++) {
        result.push(arr[i]);
    }

    for (int i = 0; i <= s.top; i++) {
        result.push(s.arr[i]);
    }
    return result;
}
MyStack::~MyStack() {
    delete[] arr;
}
