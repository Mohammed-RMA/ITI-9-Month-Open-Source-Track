#include <bits/stdc++.h>
#include "Employee.h"
using namespace std;


void display(Employee e) {
    cout<<"name is: "<<e.getName()<<endl;
    cout<<"id is: "<<e.getId()<<endl;
    cout<<"age is: "<<e.getAge()<<endl;
}

int main() {


    Employee e1,e2(2,20,"ahmed");
    e1.display();
    e2.display();
    display(e2);


}