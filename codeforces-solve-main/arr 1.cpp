#include<iostream>
using namespace std;
int main()
{

  long long   int n,sum=0;
    cin>>n;
   long long  int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];

    }
    if(sum<0)
    {
     cout<<sum*(-1)<<endl;
    }
    else if(sum>=0)
    {
        cout<<sum<<endl;
    }
}
