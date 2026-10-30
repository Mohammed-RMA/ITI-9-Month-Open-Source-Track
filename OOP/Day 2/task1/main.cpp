#include <bits/stdc++.h>
#include "MyStack.h"
using namespace std;
int main()
{
   MyStack s1;
   s1.push(10);
   s1.push(20);
   s1.push(30);
    MyStack s2 = s1;
   int x;
   if(s2.pop(x)){
    cout<<x<<endl;
   }
   if(s2.pop(x)){
    cout<<x<<endl;
   }
   if(s1.pop(x)){
    cout<<x<<endl;
   }
}



