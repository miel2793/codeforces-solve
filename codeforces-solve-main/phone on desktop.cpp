#include<iostream>
using namespace std;

int main()
{
     int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int x, y;
        cin >> x>> y;
        int scr = 0;
        scr=scr+ (y + 2 - 1) / 2;
        int f = (scr * 15) - (y * 4);

        if (x > f)

        {
            x=x- f;
            scr=scr+ (x + 15 - 1) / 15;
        }

        cout << scr << endl;
    }
}
