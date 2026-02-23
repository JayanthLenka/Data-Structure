#include<iostream>
using namespace std;
int main()
{
  int a,b;
char op;
cout<<"enter the a and b values";
cin>>a>>b;
cout<<"enter the operator";
cin>>op;
switch(op)
{
case'+':cout<<"addition : "<<a+b;
break;
case'-' :cout<<"subtraction : "<<a-b;
break;
case'*' :cout<<"multiplication :"<<a*b;
break;
case'/':
if(b==0)
  cout<<"division not possible";
else
  cout<<"division"<<a/b;
break;
default:cout<<"invalid operator";
}
}
