#include <iostream>

using namespace std;

template<class t>
void swap(t *x,t *y) {
    t temp=*x;
    *x=*y;
    *y=temp;
}
int main() {
int x=5,y=4;
    swap(&x,&y);
    cout<<x<<' '<<y<<endl;
    float a=12.1,b=13.5;
    swap(&a,&b);
    cout<<a<<' '<<b<<endl;
}
