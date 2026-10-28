#ifndef DAY_1_EMPLOYEE_H
#define DAY_1_EMPLOYEE_H
#include <bits/stdc++.h>
using namespace std;

class Employee {
    int id,age;
    string name;
public:
    Employee();
    Employee(int id);
    Employee(int id,int age) ;
    Employee(int id,int age,string name);
    Employee(int id,string name) ;
    void setId(int id) ;
    void setAge(int age) ;
    void setName(string name) ;
    int getId() ;
    int getAge() ;
    string getName() ;

    void display();
};


#endif
