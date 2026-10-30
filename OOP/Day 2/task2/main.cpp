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
class MyRectangle{
   Point p1,p2;
   public:
       MyRectangle(){
       p1.setXY(0,0);
       p2.setXY(0,0);
       }
       MyRectangle(int x1,int y1,int x2,int y2){
         p1.setXY(x1,y1);
         p2.setXY(x2,y2);
       }
       MyRectangle(Point _p1,Point _p2){
            p1.setXY(_p1.getX(),_p1.getY());
            p2.setXY(_p2.getX(),_p2.getX());
       }
       void draw(){
            rectangle(p1.getX(), p1.getY(), p2.getX(), p2.getY());
       }

};

class MyCircle{
    Point p;
    int radius;
public:
    MyCircle(){
        radius=0;
        p.setXY(0,0);
    }
    MyCircle(Point _p,int _radius){
    radius=_radius;
    p.setXY(_p.getX(),_p.getY());
    }
    void draw(){
    circle(p.getX(),p.getY(),radius);
    }
};
int main() {

        initgraph(&gdriver, &gmode, "d:\\tc\\bgi");
        Point p1(400,400),p2(100,100),p3(250,250);
        MyRectangle r1(p1,p2);
        r1.draw();

        MyCircle c1(p3,100);
        c1.draw();
        getch();
            return 0;
}


