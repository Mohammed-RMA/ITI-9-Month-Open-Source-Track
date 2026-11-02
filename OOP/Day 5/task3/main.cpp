#include <graphics.h>
#include <bits/stdc++.h>
using namespace std;
int gdriver = DETECT, gmode, errorcode;
class Point {
    int x,y;
public:
 Point() {
        x=y=0;
 }
    Point(int x){
        this->x=x;
        y=0;
    }
   Point(int x,int y) {
        this->x=x;
        this->y=y;
    }
    void setX(int x) {
        this->x=x;
    }
    void setY(int y) {
        this->y=y;
    }
    void setXY(int x,int y){
         this->x=x;
          this->y=y;
    }
    int getX() {
        return x;
    }
    int getY() {
        return y;
    }
    void display() {
        cout<<"( "<<x<<" , "<<y<<" )"<<endl;
    }
};
class Shape {
protected:
    Point p1,p2;
public:
    Shape(Point _p1,Point _p2) {
        p1=_p2;
        p1=_p2;
    }
    virtual void draw()=0;
      Point getFirstPoint() {
        return p1;
    }
    Point getSecondPoint() {
        return p2;
    }
  virtual void setFirstPoint(Point _p1) {
        p1=_p1;
    }
    virtual void setSecondPoint(Point _p2) {
        p2=_p2;
    }
};

class MyRectangle:public Shape{
public:
    MyRectangle(Point _p1,Point _p2):Shape(_p1,_p2){
        p1.setXY(_p1.getX(),_p1.getY());
        p2.setXY(_p2.getX(),_p2.getX());
    }
    void draw(){
        rectangle(p1.getX(), p1.getY(), p2.getX(), p2.getY());
    }

};

class MyCircle:public Shape{
    int radius;
public:
    MyCircle(Point _p,int _radius):Shape(_p,_p){
        radius=_radius;
        p1.setXY(_p.getX(),_p.getY());
    }
    void draw(){
        circle(p1.getX(),p1.getY(),radius);
    }
};
void myFun(Shape *s){
    s->draw();
}
int main() {
    initgraph(&gdriver, &gmode, "d:\\tc\\bgi");
    Point p1(400,400),p2(100,100),p3(250,250);
    MyRectangle r1(p1,p2);
    MyCircle c1(p3,100);
    myFun(&r1);
    myFun(&c1);
    getch();
    return 0;
}
