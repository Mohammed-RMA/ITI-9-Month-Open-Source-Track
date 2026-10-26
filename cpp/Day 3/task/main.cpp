#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string.h>
using namespace std;
void textattr(int i){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
}

void oneDimArray() {
    int sum=0,max,min,search=-1,flag,len;
    cout<<"enter the length of the array : ";
    cin>>len;
    int arr[len];
    cout<<"enter the element number "<<1<<" : ";
    cin>>arr[0];
    max=min=arr[0];

    for (int i=1;i<len;i++) {
            cout<<"enter the element number "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<"the array is : ";
    for (int i=0;i<len;i++) {
       cout<<arr[i]<<' ';
        if (max<arr[i]) {
            max=arr[i];
        }
        if (min>arr[i]) {
            min=arr[i];
        }
    }
    cout<<"\nthe max is : "<<max<<endl;
    cout<<"\nthe min is : "<<min<<endl;
    cout<<"enter a number to search : ";
    cin>>search;
    for (int i=0;i<len;i++) {
       if (arr[i]==search) {
          flag=1;
           search=i;
           break;
       }
    }
    if (flag) {
        cout<<"the index of it is : "<<search<<endl;
    }
    else {
        cout<<"not found"<<endl;
    }

}


void students() {
    int rows,cols;
    cout<<"Enter the number of students : ";
    cin>>rows;
    cout<<"Enter the number of subjects : ";
    cin>>cols;
    int students[rows][cols];
    int studentSum[rows]={0};
    float subjectAvg[cols]={0};

    for (int i=0;i<rows;i++) {
        for (int j=0;j<cols;j++) {
            cout<<"enter the number with index : arr["<<i<<"]"<<"["<<j<<"]"<<' ';
            cin>>students[i][j];
        }
    }
    cout<<"the array is : "<<endl;
    for (int i=0;i<rows;i++) {
        for (int j=0;j<cols;j++) {
            cout<<students[i][j]<<' ';
            studentSum[i]+=students[i][j];
            subjectAvg[j]+=students[i][j];
        }
        cout<<endl;
    }
    cout<<"the students grades : "<<endl;
    for (int i=0;i<rows;i++) {
            cout<<"student "<<i+1<<" : ";
        cout<<studentSum[i]<<endl;
    }
    cout<<"the subjects avg : "<<endl;
for (int j=0;j<cols;j++) {
        subjectAvg[j]/=cols;
        cout<<"subject "<<j+1<<" : ";
        cout<<subjectAvg[j]<<endl;
    }
}

void concat(){
    int size=100;
    char fName[size],lName[size],fullName[size];
    cout<<"enter the first name : ";
    cin>>fName;
     cout<<"enter the last name : ";
    cin>>lName;
    strcpy(fullName,fName);
    strcat(fullName," ");
    strcat(fullName,lName);
    cout<<"the full name is : "<<fullName;
}

void keys(){
    char ch;
    cout<<"enter a character : ";
    ch=getch();
    if(ch==-32){
     cout<<"extended key"<<endl;
    }
    else{
        cout<<"normal key "<<endl;
    }
}

void menu(){
    char arr[3][20]={"New","Display","exit"},ch;
    int cursor=0;
    while(true){
        system("cls");
         for(int i=0;i<3;i++){
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
            if(cursor>=3){
                cursor=0;
            }
             textattr(0x02);

          }

          else if(ch==72){
            cursor--;
            if(cursor<0){
                cursor=2;
            }
             textattr(0x02);
          }
          else{
            cout<<"invalid input"<<endl;
          }

     }
    }

}
int main() {
    // oneDimArray();
    //students();
    //concat();
    //keys();
    menu();
}
