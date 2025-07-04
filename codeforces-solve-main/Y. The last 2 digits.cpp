#include<iostream>
using namespace std;
int  main()
{
    long long int  a,b,c,d;
    cin>>a>>b>>c>>d;
    a=a%100;
    b=b%100;
    c=c%100;
    d=d%100;
    long long int j= a*b*c*d;
    long long int t=j%100;
    if(t<10)
    {
        cout<<0<<t<<endl;

    }
    else{
 cout<<t<<endl;
    }
   
}