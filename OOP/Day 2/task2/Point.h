
#ifndef DAY_1_POINT_H
#define DAY_1_POINT_H
class Point {
    int x,y;
public:
    Point();
    Point(int x);
    Point(int x,int y) ;
    void setX(int x) ;
    void setY(int y);
    int getX() ;
    int getY() ;
    void display() ;
};


#endif
