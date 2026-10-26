#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>
using namespace std;
void gotoxy(int x, int y){
    COORD coordinate;
    coordinate.X = x * 3;
    coordinate.Y = y*3;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}

void magicBox(){
    int row = 1, col = 1, size, flag = 1;
    cout << "enter size: " << endl;
    do
    {
        cin >> size;

    }while (size%2==0);
    for (int i = 1; i <= size * size; i++)
    {
        if (i == 1)
        {
            col = size / 2 + 1;
            row = 1;
        }
        else
        {
            if ((i - 1) % size )
            {
                row--;
                col--;

                if (row == 0)
                    row = size;

                if (col ==0)
                    col = size;
            }
            else
            {
                row++;
                if (row > size)
                    row = 1;
            }
        }

        gotoxy(col, row);
        cout<<i;
    }
}
int power(int num,int power) {
    int result=1;
   for (int i=0;i<power;i++) {
       result*=num;
   }
    return result;
}
void fib(int num) {
    int last=0,cur=1,temp=0;
    cout<<last<<' '<<cur<<' ';
    for (int i=2;i<num;i++) {
        cout<<cur+last<<' ';
        temp=cur;
        cur+=last;
        last=temp;
    }
};
void grade() {
    int degree;
    cout<<"enter ur degree : ";
    cin>>degree;
    if (degree>= 90) {
        cout<<"A";
    }
    else if (degree>=80) {
        cout<<"B";
    }
    else if (degree>=70) {
        cout<<"C";
    }
    else if(degree>=50){
        cout<<"D";
    }
    else{
        cout<<"fail"<<endl;
    }
}
void menu(){
    int flag=1;
    char ch;
    do
    {
        system("cls");

        cout<<"New\nDisplay\nexit\n";
        ch =getch();
        switch (ch)
        {
        case 'n':
        case'N':
            cout<<"New selected"<<endl;
            break;
        case 'd':
        case'D':
                cout<<"display selected"<<endl;
            break;
        case 'e':
        case'E':
        case 27:
            cout<<"exit selected"<<endl;
            flag=0;
            break;
        default :
            cout<<"invalid input"<<endl;
        }
        cout<<"press any key"<<endl;
        getch();
    }

    while (flag);
}

bool isPrime(int num) {
    if (num%2==0 || num<=2) {
        return false;
    }
    for (int i=3;i*i<=num;i+=2) {
        if (num%i==0) {
            return false;
        }
    }
    return true;

}
void primeNumbers(int num) {
    for (int i=1;i<=num;i++) {
        if (isPrime(i)) {
            cout<<i<<' ';
        }
    }

}
void mirror(int num){
    while(num>0){
        cout<<num%10;
        num/=10;
    }
}

void Binary(int num){
    string str="";
    while(num>0){
        if(num%2){
            str+='1';
        }
        else{
            str+='0';
        }
        num/=2;
    }
    for (int i=str.length();i>=0;i--) {
        cout<<str[i];
    }
}

void counting(){
     int words=1,characters=0,spaceFlag=0;
     char inputChar;
        cout << "Enter a character : " << endl;
     do{
        inputChar=getch();
        cout<<"you press : "<<inputChar<<endl;
        if(inputChar==' '){
        spaceFlag=1;
        }
        else if((inputChar>='a'&& inputChar<='z') || (inputChar>='A'&& inputChar<='Z')){
            characters++;
        }
       if(spaceFlag && inputChar!=' '){
                words++;
                spaceFlag=0;
            }
     }
     while(inputChar != 13);
     cout << "Words count is: " << words << endl;
     cout << "Characters count is: " << characters << endl;
}
int main()
{
    //magicBox();
    //cout<<power(2,3);
    //fib(8);
    //grade();
     //menu();
     //cout<<isPrime(11)<<endl;
     //primeNumbers(100);
      //  mirror(12345);
      //Binary(11);
      counting();

    return 0;
}
