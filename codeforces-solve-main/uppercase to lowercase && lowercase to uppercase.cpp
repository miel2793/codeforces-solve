#include<iostream>
using namespace std;
int main()
{

    char X;
    cin>>X;
    if((X>='A'&& X<='Z')||(X>='a'&&X<='z'))
    {
        if(X>='A'&&X<='Z')
        {
            X=X+32;
        }
        else if(X>='a'&&X<='z')
        {
            X=X-32;
        }
        cout<<X<<endl;
    }
}
