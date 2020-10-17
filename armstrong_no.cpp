#include<iostream>
using namespace std;

int main()
{
    int a,original_num,remainder,result=0;
    cout<<"Enter a number : ";
    cin>>a;
    original_num=a;
    while(original_num !=0)
    {
        remainder=original_num%10;
        result+=remainder*remainder*remainder;
        original_num=original_num/10;
    }
    if(result==a)
    {
        cout<<"its armstrong no ";

    }
    else
    {
        cout<<"its not armstrong no";
    }

    return 0;
}
    