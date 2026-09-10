#include<iostream>
using namespace std;
void swapRef(int &a,int &b)
{
    int t=a;a=b;b=t;
}
void swapPtr(int*a,int*b)
{
    int t=*a;*a=*b;*b=t;
}
int main()
{
int x=10,y=20;
cout<<"After swapref:x="<<x<<"y="<<y<<endl;
swapPtr(&x,&y);
cout<<"After swapPtr:x="<<x<<"y="<<y<<endl;
int &alias=x;
alias=99;
return 0;
}