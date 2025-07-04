#include <iostream>
using namespace std;

int main()
{
    int n, a = 0, b = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int m, l;
        cin >> m >> l;

        if (m > l)
        {
            a++;
        }
        else if (l > m)
        {
            b++;
        }
    }

    if (a > b)
    {
        cout << "Mishka" << endl;
    }
    else if (b > a)
    {
        cout << "Chris" << endl;
    }
    else
    {
        cout << "Friendship is magic!^^" << endl;
    }

    return 0;
}
