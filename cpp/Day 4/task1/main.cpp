#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
struct emp{
    int id;
    char name[20];
    int age;
    float salary,deduction,overtime;
};
void displayEmployees(emp employee,int i) {
    int finalSalary=employee.salary+employee.overtime-employee.deduction;
    cout<<i+1<<"\t\t\t"<<employee.id<<"\t\t"<<employee.name<<"\t\t"<<employee.age<<"\t\t"<<finalSalary<<endl;
}
void getEmployees() {
    int num;
    cout<<"enter the number of employees : ";
    cin>>num;
    emp employess[num];
    for(int i=0;i<num;i++){
        cout<<"enter the data of employee number "<<i+1<<endl;
        cout<<"enter the id of him : ";
        cin>>employess[i].id;
        cout<<"enter the name of him : ";
        cin>>employess[i].name;
        cout<<"enter the age of him : ";
        cin>>employess[i].age;
        cout<<"enter the salary of him : ";
        cin>>employess[i].salary;
        cout<<"enter the deduction of him : ";
        cin>>employess[i].deduction;
        cout<<"enter the overtime of him : ";
        cin>>employess[i].overtime;
    }
    cout<<"employee\t\tid\t\tname\t\tage\t\tsalary"<<endl;
    for (int i=0;i<num;i++) {
        displayEmployees(employess[i],i);
    }
}


int main()
{
    getEmployees();
}