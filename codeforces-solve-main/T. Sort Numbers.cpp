#include <iostream>
using namespace std;


int main() {
    int A, B, C;
    
   
    cin >> A >> B >> C;
    
    
    int f, s, t;
    
       if (A <= B && A <= C) {
        f = A;
        if (B <= C) {
            s = B;
            t = C;
        } else {
            s = C;
            t = B;
        }
    } else if (B <= A && B <= C) {
        f= B;
        if (A <= C) {
            s = A;
            t = C;
        } else {
            s = C;
            t= A;
        }
    } else {
        f = C;
        if (A <= B) {
            s= A;
            t= B;
        } else {
            s = B;
            t= A;
        }
    }
    
    
    cout << f << "\n" << s << "\n" << t << "\n\n";
    cout << A << "\n" << B << "\n" << C << "\n";
    
    return 0;
}
