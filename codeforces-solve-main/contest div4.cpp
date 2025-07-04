
#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int A = 0,B = 0;
        for (char c : s) {
            if (c == 'A')
                A++;
            else
                B++;
        }

        if (A > B)
            cout << "A"<<endl;
        else
            cout << "B"<<endl;
    }

    return 0;
}
