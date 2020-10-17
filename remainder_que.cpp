#include<iostream>
using namespace std;

int main()
{
    int a,b,q,r;

    cout<<"enter no : ";
    cin>>a;
    cout<<"enter divisor : ";
    cin>>b;
    if(a>b)
    {
        q=a/b;
        r=a%b;
        cout<<"Qutiont is : "<<q<<endl;
        cout<<"remainder is : "<<r;

    }
    else
    {
        cout<<"1st no should be greater";
    }

    return 0;
}

    
