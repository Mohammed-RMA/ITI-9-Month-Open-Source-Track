#include <bits/stdc++.h>
using namespace std;


class Person {
protected:
    int id, age;
    string name;

public:
    Person(int _id, int _age, string _name) {
        id=_id;
        age=_age;
        name=_name;
        //cout<<"parent const"<<endl;
    }
    void setId(int _id) {
        id=_id;
    }
    void setAge(int _age) {
        if (_age>=0)
            age=_age;
        else {
            cout<<"invalid age"<<endl;
        }
    }
    void setName(int _name) {
        name=_name;
    }
    int getId() {
        return id;
    }
    int getAge() {
        return age;
    }
    string getName() {
        return name;
    }
    virtual void display() {
        cout << "id : " << id << endl;
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
    }
    ~Person() {
      //  cout<<"parent dest"<<endl;
    }
};

class Employee : public Person {
    float salary;

public:
    Employee(int _id, int _age, string _name, float _salary): Person(_id, _age, _name) {
        salary=_salary;
        //cout<<"emp const"<<endl;
    }
    void setAge() {
       int _age=Person::getAge();
        if(_age<25){
            cout<<"invalid emp age"<<endl;
        }
        else {
            age=_age;
        }
    }
    void setSalary(int _salary) {
        salary=_salary;
    }
    float getSalary() {
        return salary;
    }
    void display() {
        Person::display();
        cout << "Salary: " << salary << endl;
    }
    ~Employee() {
        //cout<<"empl dest"<<endl;
    }
};

class Student : public Person {
    int grade;

public:
    Student(int _id, int _age, string _name, int _grade): Person(_id, _age, _name) {
        grade=_grade;
        //cout<<"student const"<<endl;
    }
    void setAge() {
        int _age=Person::getAge();
        if(_age<6){
            cout<<"invalid stuent age"<<endl;
        }
        else {
            age=_age;
        }
    }
    void setGrade(int _grade) {
        if (_grade<7) {
            cout<<"invalid grade"<<endl;
        }
        else {
            grade=_grade;
        }
    }
    int getGrade() {
        return grade;
    }
    void display() {
        Person::display();
        cout << "grade: " << grade << endl;
    }
    ~Student() {
      //  cout<<"student dest"<<endl;
    }
};

void myFun(Person *p) {
    p->display();
}
int main() {

    Person p1(10, 18, "mohamed");
    // p1.display();

     Employee emp1(100, 25, "Mohamed",15000);
    // emp1.display();

     Student st1(100, 25, "Mohamed",10);
    myFun(&p1);
    cout<<"========================="<<endl;
    myFun(&emp1);
     cout<<"========================="<<endl;
    myFun(&st1);

    return 0;
}
