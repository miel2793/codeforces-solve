#include<iostream>
using namespace std;
int main()
{

    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m;
        cin>>n>>m;
        if (n >= m && (n % 2 == m % 2)) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
} 
