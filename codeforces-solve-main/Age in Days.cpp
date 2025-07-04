#include<iostream>
using namespace std;
int main()
{

    int N,y,m,d;
    cin>>N;
    y=N/365;
    m=(N%365)/30;
    d=(N%365)-(m*30);


    cout<<y<<" years"<<endl;
      cout<<m<<" months"<<endl;
      cout<<d<<" days"<<endl;

}
