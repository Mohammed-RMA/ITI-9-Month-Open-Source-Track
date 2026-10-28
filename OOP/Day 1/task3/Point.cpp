#include "Point.h"
#include <bits/stdc++.h>
using namespace std;

    Point::Point() {
        x=y=0;
    }
    Point::Point(int x) {
        this->x=x;
        y=0;
    }
    Point::Point(int x,int y) {
        this->x=x;
        this->y=y;
    }
    void Point::setX(int x) {
        this->x=x;
    }
    void Point::setY(int y) {
        this->y=y;
    }
    int Point::getX() {
        return x;
    }
    int Point::getY() {
        return y;
    }
    void Point::display() {
        cout<<"( "<<x<<" , "<<y<<" )"<<endl;
    }
