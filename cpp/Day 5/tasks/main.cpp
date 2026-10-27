#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

struct emp{
    int id=-1;
    char name[20];
    int age;
    float salary,deduction,overtime;
};
void swap(int *firstNum,int *secondNum);
void dynamicArray();
void getEmployees();
void pointerToEmployee();


int main()
{
    // int x=5,y=10;
    // swap(&x,&y);
    // cout<<x<<' '<<y<<endl;
   // dynamicArray();
    getEmployees();
   //pointerToEmployee();

}

void swap(int *firstNum,int *secondNum) {
   int temp=*firstNum;
    *firstNum=*secondNum;
    *secondNum=temp;
}
void dynamicArray() {
    int len=0;
    cout<<"enter the size of the array : ";
    cin>>len;
    int *arr=new int[len];
    for (int i=0;i<len;i++) {
        cout<<"enter the array element number "<<i+1<<endl;
        cin>>arr[i];
    }
    cout<<"the array is : "<<endl;
    for (int i=0;i<len;i++) {
        cout<<arr[i]<<' ';
    }
}
void getEmployees() {
    int numberOfEmployees;
    cout<<"enter the number of employees : ";
    cin>>numberOfEmployees;
    emp *employees=new emp[numberOfEmployees];
    for (int i=0;i<numberOfEmployees;i++) {
        cout<<"enter the id of him : ";
        cin>>employees[i].id;
        cout<<"enter the name of him : ";
        cin>>employees[i].name;
        cout<<"enter the age of him : ";
        cin>>employees[i].age;
        cout<<"enter the salary of him : ";
        cin>>employees[i].salary;
        cout<<"enter the deduction of him : ";
        cin>>employees[i].deduction;
        cout<<"enter the overtime of him : ";
        cin>>employees[i].overtime;
    }
    cout<<"the employees u enter are :"<<endl;
    cout<<"id\t\tname\t\tage\t\tsalary"<<endl;
    for (int i=0;i<numberOfEmployees;i++) {
        int finalSalary=employees[i].salary+employees[i].overtime-employees[i].deduction;
            cout<<employees[i].id<<"\t\t"<<employees[i].name<<"\t\t"<<employees[i].age<<"\t\t"<<finalSalary<<endl;
    }
}

void pointerToEmployee() {
    emp *employee=new emp;
    cout<<"enter the id of him : ";
    cin>>employee->id;
    cout<<"enter the name of him : ";
    cin>>employee->name;
    cout<<"enter the age of him : ";
    cin>>employee->age;
    cout<<"enter the salary of him : ";
    cin>>employee->salary;
    cout<<"enter the deduction of him : ";
    cin>>employee->deduction;
    cout<<"enter the overtime of him : ";
    cin>>employee->overtime;
    cout<<"the employee u enter is :"<<endl;
    cout<<"id\t\tname\t\tage\t\tsalary"<<endl;
        int finalSalary=employee->salary+employee->overtime-employee->deduction;
        cout<<employee->id<<"\t\t"<<employee->name<<"\t\t"<<employee->age<<"\t\t"<<finalSalary<<endl;

}
