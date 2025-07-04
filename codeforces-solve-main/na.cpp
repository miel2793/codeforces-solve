#include <iostream>
using namespace std;
int main()
{

    char C, Next;
    cin >> C;
    if (C == 'z')
    {
        Next = 'a';
    }

    else
    {
        Next = C + 1;
    }
    cout << Next << endl;
}
