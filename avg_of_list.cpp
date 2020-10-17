#include<iostream>
using namespace std;

int main()
{
    int n,a;
    float sum=0;
    float avg;
    cout<<"how many no u want to enter : ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cout<<"enter no : ";
        cin>>a;
        sum=sum+a;
    }
    avg=float(sum/n);
    cout<<"avg is : "<<avg;


    return 0;
}