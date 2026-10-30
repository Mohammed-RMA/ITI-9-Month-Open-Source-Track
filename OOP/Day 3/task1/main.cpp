#include <bits/stdc++.h>
#include "Complex.h"
using namespace std;

Complex operator+(int num ,Complex c){
    Complex result ((num+c.getReal()),c.getImg());
    return result;
}

int main()
{
   Complex c1(11,4),c2(10,4),c3;
    c3=c1+c2;
    cout<<"adding 2 complex : ";
    c3.display();
     cout<<"adding complex  & int : ";
    c3=c1+5;
    c3.display();
     cout<<"adding int & complex : ";
    c3=5+c1;
    c3.display();
    bool x=(c1==c2);
    cout<<"== : "<<x<<endl;
    x=(c1!=c2);
    cout<<"!= : "<<x<<endl;
    Complex preFix= ++c1;
    preFix.display();
    Complex postFix= c1++;
    postFix.display();
    c1.display();

    return 0;
}
