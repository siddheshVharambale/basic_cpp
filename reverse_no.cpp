#include<iostream>
using namespace std;

int main()
{
    int a,rev=0,d;
    cout<<"enter a no : ";
    cin>>a;

    while(a!=0)
    {
        d=a%10;
        rev=(rev*10)+d;
        a=a/10;
    }
     if(rev>=a)
     {
        cout<<"reverse is : "<<rev;
     }
     return 0;
}