#include "Employee.h"
#include <bits/stdc++.h>
using namespace std;

    Employee::Employee() {
        id=-1;
        age=18;
        name="no name";
    }
    Employee::Employee(int id) {
        this->id=id;
        age=18;
        name="no name";
    }
    Employee::Employee(int id,int age) {
        this->id=id;
        this->age=age;
        name="no name";
    }
    Employee::Employee(int id,int age,string name) {
        this->id=id;
        this->age=age;
        this->name=name;
    }
    Employee::Employee(int id,string name) {
        this->id=id;
        this->name=name;
        age=18;
    }
    void Employee::setId(int id) {
        this->id=id;
    }
    void Employee::setAge(int age) {
        this->age=age;
    }
    void Employee::setName(string name) {
        this->name=name;
    }
    int Employee::getId() {
        return id;
    }
    int Employee::getAge() {
        return age;
    }
    string Employee::getName() {
        return name;
    }

    void Employee::display() {
        cout<<"name is: "<<name<<endl;
        cout<<"id is: "<<id<<endl;
        cout<<"age is: "<<age<<endl;
    }


