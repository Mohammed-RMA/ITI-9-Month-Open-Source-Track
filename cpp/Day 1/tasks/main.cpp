#include <bits/stdc++.h>
#include <iostream>
using namespace std;


void format(){
    double Num1=12.432;
    int Num2=-12;
    printf("%d\n",Num2);
    printf("%u\n",Num2);
    printf("%lf\n",Num1);
    printf("%.2f\n",Num1);
}


void ascii(){
    char ch;
    cout<<"enter a char : ";
    cin >>ch;
    cout<< "the character is : "<< ch ;
    cout<< "the ascii of it is : "<< int(ch) ;
    }

void representation(int num){
    printf("the Hexadecimal representation is : %x",num);
    printf("\nthe octal representation is : %o",num);
 }

void lowerToUpper(char ch){
      int temp='a'-'A';
      if(ch >='a' && ch <='z'){
        cout<<char(ch-(temp));
      }
      else {
        cout<<ch;
      }
}

int main()
{
    // task 1
    //format();


    // task 2
    //ascii();

    //task 3
    //representation(11);

    //task 4
    lowerToUpper('a');


}
