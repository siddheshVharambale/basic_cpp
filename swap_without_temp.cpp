#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter 1st no : ";
    cin>>a;3
    cout<<"enter 2nd no : ";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swapping a is : "<<a<<" and b is : "<<b;
    return 0;
}