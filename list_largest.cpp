#include<iostream>
using namespace std;

int main()
{
    int a,b,large=0;
    
    cout<<"enter how many nos u want : ";
    cin>>a;

    for(int i=0;i<a;i++)
    {
        cout<<"enter no : ";
        cin>>b;
        if(b>large)
        {
            large=b;
        }
    }
    cout<<"largest no is "<<large;
    return 0;
}