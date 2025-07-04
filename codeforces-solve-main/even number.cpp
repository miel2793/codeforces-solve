#include <iostream>
using namespace std;
int main()
{

    int n, i;
    cin >> n;
    bool cq=false;

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
             cq=true;
        }
       
    }
    if(cq!=true)
    {
        cout<<"-1"<<endl;
    }
}
