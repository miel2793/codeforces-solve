#include <iostream>
using namespace std;
int main()
{

    long long  A, B;
    char ch;
    cin>> A >> ch >> B;
    if (ch =='+')
    {

        cout << A + B << endl;
    }
    else if (ch =='-')
    {

        cout << A - B << endl;
    }
    else if (ch== '*')
    {

        cout << A * B << endl;
    }
    else if (ch== '/')
    {

        cout << A / B << endl;
    }
}
