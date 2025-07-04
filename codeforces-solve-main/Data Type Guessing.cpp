#include <iostream>
using namespace std;

int main() {
    long long n, k, a;
    cin >> n >> k >> a;

    long long result = (n * k) / a;

    if (result <= 2147483647) 
    {
        cout << "int" << endl;
    } else if (result <= 9223372036854775807) {
        cout << "long long" << endl;
    } else {
        cout << "double" << endl;
    }

    return 0;
}
