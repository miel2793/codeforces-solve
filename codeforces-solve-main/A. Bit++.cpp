#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int x = 0;
    for (int i = 0; i < n; i++) {
        char op[4];
        cin >> op;
   if (op[0] == '+' || op[1] == '+' || op[2] == '+') {
            x++;
        } else {
            x--; 
        }
    }

   
    cout << x <<endl;

    return 0;
}
