#include<iostream>
using namespace std;
int main()
{
    int t,n,a,sum=0,ans=0;
    int avg;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            sum=  sum+a;
        }
        avg=sum/n;
        if((avg*n)>=sum)
            cout<<avg<<endl;
        else
        {
            avg= avg +1;
            cout<<avg<<endl;
        }
        sum=0;
    }
    return 0;
}