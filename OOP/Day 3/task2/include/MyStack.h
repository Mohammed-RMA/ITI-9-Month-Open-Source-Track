#ifndef MYSTACK_H
#define MYSTACK_H


class MyStack {
    int top, size;
    int* arr;
public:
MyStack() ;
void push(int data);
bool pop( int &d);
MyStack(const MyStack & s);
MyStack& operator=(const MyStack& s);
MyStack operator+(const MyStack &s);
~MyStack() ;
};

#endif // MYSTACK_H
