#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    double x,n,op;
    cout<<"enter base value : ";
    cin>>n;
    cout<<"enter power value : ";
    cin>>x;
    op=pow(n,x);
    cout<<"output of power "<<x<<" to the base "<<n<<" is : "<<op;
    return 0;
    
}    