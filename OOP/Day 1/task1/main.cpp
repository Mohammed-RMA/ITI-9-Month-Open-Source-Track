#include <bits/stdc++.h>
#include "Complex.h"
using namespace std;

Complex add(Complex c1,Complex c2) {
    Complex result;
    result.setReal(c1.getReal()+c2.getReal());
    result.setImg(c1.getImg()+c2.getImg());
    return result;
}

int main() {

    Complex c1,c2(20),c3(10,2),c4;
    cout<<"parameterless constructor : ";
    c1.display();
    cout<<"one parameter constructor : ";
    c2.display();
    cout<<"two parameter constructor : ";
    c3.display();
    c4.setReal(1);
    c4.setImg(5);
    cout<<"addition in class : ";
    Complex result= c4.add(c3);
    result.display();
    cout<<"stand alone addition : ";
    result=add(c4,c3);
    result.display();

}