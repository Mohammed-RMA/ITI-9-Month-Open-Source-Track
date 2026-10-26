#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
const int numOfEmployees=200;
struct emp{
    int id=-1;
    char name[20];
    int age;
    float salary,deduction,overtime;
};
emp employess[numOfEmployees];

void textattr(int i);
void menu();
void getEmployees();
void displayEmployees();
void deleteEmployee();



int main() {
    menu();
}

void textattr(int i){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
}

void deleteEmployee( ){
    int index;
    displayEmployees();
    cout<<"enter the employee number u need to delete : ";
    cin>>index;
    index--;
    employess[index].id=-1;
}
void displayEmployees() {
    system("cls");
        cout<<"employee\t\tid\t\tname\t\tage\t\tsalary"<<endl;
        for (int i=0;i<numOfEmployees;i++) {
        int finalSalary=employess[i].salary+employess[i].overtime-employess[i].deduction;
        if(employess[i].id!=-1){
             cout<<i+1<<"\t\t\t"<<employess[i].id<<"\t\t"<<employess[i].name<<"\t\t"<<employess[i].age<<"\t\t"<<finalSalary<<endl;
        }

        }
}
void getEmployees() {
    system("cls");
    int indexOfEmployee;
    cout<<"enter the index u need to assign : ";
    cin>>indexOfEmployee;
    indexOfEmployee--;
            if(employess[indexOfEmployee].id==-1){
            cout<<"enter the id of him : ";
            cin>>employess[indexOfEmployee].id;
            cout<<"enter the name of him : ";
            cin>>employess[indexOfEmployee].name;
            cout<<"enter the age of him : ";
            cin>>employess[indexOfEmployee].age;
            cout<<"enter the salary of him : ";
            cin>>employess[indexOfEmployee].salary;
            cout<<"enter the deduction of him : ";
            cin>>employess[indexOfEmployee].deduction;
            cout<<"enter the overtime of him : ";
            cin>>employess[indexOfEmployee].overtime;
            }
        else{
            cout<<"this place is taken plz choose another : ";
        }
    }



void menu(){
    int menuSize=4,flag=1;
    char arr[menuSize][20]={"New","Display","Delete","exit"},ch;
    int cursor=0;
    while(flag){
        system("cls");
        for(int i=0;i<menuSize;i++){
            if(cursor==i){
                textattr(0x02);
            }
            else{
                textattr(0x07);
            }
            cout<<arr[i]<<endl;
        }
        ch =getch();
        if(ch==-32){
            ch=getch();
            if(ch==80){
                cursor++;
                if(cursor>=menuSize){
                    cursor=0;
                }
                textattr(0x02);

            }
            else if(ch==72){
                cursor--;
                if(cursor<0){
                    cursor=menuSize-1;
                }
                textattr(0x02);
            }
            else{
                cout<<"invalid input"<<endl;
            }

        }
        else if(ch==13){
            if(cursor==0){
               getEmployees();
            }
            else if(cursor==1){
                displayEmployees();
            }
            else if(cursor==2){
               deleteEmployee();
            }
            else{
                    flag=0;
                    cout<<"the program is exiting ..";
                    break;

            }
              cout<<"press any key to return: ";
            ch=getch();

        }
        else{
             textattr(0x07);
            cout<<"invalid input : "<<endl<<"press a valid key : ";
            ch=getch();

        }
    }

}
