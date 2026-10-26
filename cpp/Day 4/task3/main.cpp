#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

int factorial(int num) {
    int result=1;
    for (int i=1;i<=num;i++) {
        result*=i;
    }
    return result;
}
int power(int num,int power) {
    int result=1;
    for (int i=0;i<power;i++) {
        result*=num;
    }
    return result;
}
void fib(int num) {
    int arr[num];
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<num;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    for(int i=0;i<=num;i++){
        cout<<arr[i]<<' ';
    }
};
int calculation(float firstNum,float secondNum,char operation) {
    float result;
    switch (operation) {
        case '+':
            result=firstNum+secondNum;
            break;
        case '-':
            result=firstNum-secondNum;
            break;
        case '*':
            result=firstNum*secondNum;
            break;
        case '/':
            result=firstNum/secondNum;
            break;
    }
    return result;
}
void swap(int &firstNum ,int &secondNum ) {
  int temp=firstNum;
  firstNum=secondNum;
  secondNum=temp;
}
int main() {
   // cout<<factorial(5);
  //cout<< power(2,3);
    //fib(8);
    //cout<<calculation(3,4,'*');
     int first=2,second=4;
    cout<<"before swapping : "<<endl;
    cout<<"first is : "<<first<<" second is : "<<second<<endl;
    swap(first,second);
    cout<<"after swapping : "<<endl;
    cout<<"first is : "<<first<<" second is : "<<second<<endl;
}
