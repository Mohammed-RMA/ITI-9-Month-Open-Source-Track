#include <bits/stdc++.h>
using namespace std;

class Shape {
protected:
    int dim1,dim2;
public:
    Shape(int _dim1,int _dim2) {
        dim1=_dim1;
        dim2=_dim2;
    }
    virtual float calcArea()=0;
    int getDim1() {
        return dim1;
    }
    int getDim2() {
        return dim2;
    }
    virtual void setDim1(int _dim1) {
        dim1=_dim1;
    }
    virtual void setDim2(int _dim2) {
        dim2=_dim2;
    }
};

class Rectangle:public Shape {
public:
    Rectangle(int _dim1,int _dim2) :Shape(_dim1,_dim2){
        dim1=_dim1;
        dim2=_dim2;
    }
    float calcArea() {
        return (dim1*dim2);
    }
};
class Square:public Rectangle {
public:
    Square(int _dim1) :Rectangle(_dim1,_dim1){
        dim1=dim2=_dim1;
    }
    float calcArea() {
        return  Rectangle::calcArea();
    }
    void setDim1(int _dim1) {
        dim1=dim2=_dim1;
    }
    void setDim2(int _dim2) {
        dim1=dim2=_dim2;
    }
};
class Triangle:public Shape {
public:
    Triangle(int _dim1,int _dim2) :Shape(_dim1,_dim2){
        dim1=_dim1;
        dim2=_dim2;
    }
    float calcArea() {
        return (0.5*dim1*dim2);
    }
};

class Circle:public Shape {
public:
    Circle(int _dim1) :Shape(_dim1,_dim1){
        dim1=_dim1;
    }
    float calcArea() {
        return (3.14*dim1*dim1);
    }
     void setDim1(int _dim1) {
        dim1=dim2=_dim1;
    }
     void setDim2(int _dim2) {
       dim1=dim2=_dim2;
    }

};
void myFun(Shape *s){
   cout<< s->calcArea()<<endl;;
}
int main() {
    Triangle t1(10,20);
    Rectangle r1(10,20);
    Circle c1(10);
    Square s1(10);
 // cout<< t1.calcArea()<<endl;
 // cout<< r1.calcArea()<<endl;
 // cout<< c1.calcArea()<<endl;
 // cout<< s1.calcArea()<<endl;

   // s1.setDim1(20);
   // cout<<s1.calcArea();

    // myFun(&t1);
    // myFun(&r1);
     //myFun(&c1);
    // myFun(&s1);
    int size=4;
    Shape ** shapes=new  Shape*[size];
    shapes[0]=&t1;
    shapes[1]=&r1;
    shapes[2]=&s1;
    shapes[3]=&c1;
    for (int i=0;i<size;i++) {
        myFun(shapes[i]);
    }
    return 0;
}
