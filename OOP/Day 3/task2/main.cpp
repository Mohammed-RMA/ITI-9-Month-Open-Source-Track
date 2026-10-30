#include <bits/stdc++.h>
#include "MyStack.h"
using namespace std;
int main()
{

   MyStack s1,s2;
   s1.push(10);
   s1.push(20);
   s1.push(30);
   s2.push(100);

   int x;
    s2 = s1;
   if(s2.pop(x)){
    cout<<x<<endl;
   }

   if(s1.pop(x)){
    cout<<x<<endl;
   }
    if(s2.pop(x)){
    cout<<x<<endl;
   }

   if(s1.pop(x)){
    cout<<x<<endl;
   }


   /*MyStack result=s1+s2;
   if(result.pop(x)){
    cout<<x<<endl;
   }
    if(result.pop(x)){
    cout<<x<<endl;
   }
    if(result.pop(x)){
    cout<<x<<endl;
   }
    if(result.pop(x)){
    cout<<x<<endl;
   }
    if(result.pop(x)){
    cout<<x<<endl;
   }
    if(result.pop(x)){
    cout<<x<<endl;
   }
    if(result.pop(x)){
    cout<<x<<endl;
   }
    if(result.pop(x)){
    cout<<x<<endl;
   }*/


}

