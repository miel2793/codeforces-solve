#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double N;
    cin >> N;

    if (floor(N) == N) {
        
        cout << "int " << static_cast<int>(N) << endl;
    } else {
       
        int intPart = static_cast<int>(N);
        double decimalPart = N - intPart;
        cout << "float " << intPart << " " << fixed << setprecision(6) << decimalPart << endl;
    }

    return 0;
}
