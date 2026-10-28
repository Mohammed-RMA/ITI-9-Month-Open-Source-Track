#include <bits/stdc++.h>

#include "Point.h"
using namespace std;


void display(Point p) {
    cout<<"( "<<p.getX()<<" , "<<p.getY()<<" )"<<endl;
}
int main() {

    Point p1,p2(2),p3(1,5);
    p1.display();
    p2.display();
    p3.display();
    display(p3);
}