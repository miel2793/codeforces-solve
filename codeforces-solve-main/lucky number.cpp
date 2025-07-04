#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int l=n%10;
    int f=n/10;
   if(l%f==0 || f%l==0)
   {
       cout<<"YES"<<endl;
   }
   else
   {
         cout<<"NO"<<endl;
   }
}