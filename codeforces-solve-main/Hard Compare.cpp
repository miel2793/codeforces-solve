#include<iostream>
#include<cmath>
using namespace std;
int main()
{

    long long A,B,C,D,one,two;

    cin>>A>>B>>C>>D;
    one=B*log(A);
    two=D*log(C);
    if(one>two)
    {
        cout<<"YES\n";

    }
    else if(one<two)
    {
        cout<<"NO\n";
    }
    else
    {
         cout<<"NO\n";
    }



    
}
