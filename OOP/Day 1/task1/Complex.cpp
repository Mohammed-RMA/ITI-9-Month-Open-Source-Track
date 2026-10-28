#include <bits/stdc++.h>
#include "Complex.h"
using namespace std;

    Complex::Complex () {
        real=img=0;
    }
    Complex::Complex (int real) {
        this->real=real;
        img=0;
    }
    Complex::Complex (int real,int img) {
        this->real=real;
        this->img=img;
    }
    void Complex::setReal(int real) {
        this->real=real;
    }
    void Complex::setImg(int img) {
        this->img=img;
    }
    int Complex::getReal() {
        return real;
    }
    int Complex::getImg() {
        return img;
    }
    Complex Complex::add(Complex c) {
        Complex result((real +c.getReal()),(img +c.getImg()));
        return result;
    }
    void Complex::display() {
        if (img ==0) {
            cout<<real<<endl;
        }
        else if (img <0) {
            cout<<real<<img<<'j'<<endl;
        }
        else {
            cout<<real<<'+'<<img<<'j'<<endl;
        }
    }
