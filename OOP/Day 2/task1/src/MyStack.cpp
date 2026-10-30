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

MyStack::MyStack(MyStack & s){
     top = s.top;
    size = s.size;
    arr = new int[size];
    for(int i=0;i<=top;i++){
        arr[i]=s.arr[i];
    }
}
MyStack::~MyStack() {
    delete[] arr;
}
