#include <iostream>
#include <string>

using namespace std;

bool areBrothers(string S1, string S2) {
    return S1 == S2;
}

int main() {
    string F1, S1, F2, S2;
    
    
    cin >> F1 >> S1;
    cin >> F2 >> S2;

    
    if (areBrothers(S1, S2)) {
        cout << "ARE Brothers" << endl;
    } else {
        cout << "NOT" << endl;
    }

    return 0;
}
