#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
 int a,b,c;
 cin>>a>>b>>c;
 if(a==b||b==a)
 {
    cout<<c<<endl;
 }
 
else  if(c==b||b==c)
 {
    cout<<a<<endl;
 }
 else if(a==c||c==a)
 {
    cout<<b<<endl;
 }
    }
   
  return 0;  
}