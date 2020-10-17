#include<iostream>
using namespace std;

int main()
{
    int yr;
    cout<<"enter a year : ";
    cin>>yr;

    if(yr%4==0)
    {
        if (yr % 100==0)
        {
            if (yr%400==0)
            {
                cout<<"its a leap yr";

            }
            else
            {
                
                cout<<"not a leap yr";
            }
            
        }
        else
        {
            cout<<" its a leap yr ";
        }
        
    }
    else
    {
        cout<<"not a leap yr";
    }
    return 0;
}