#include <iostream>
using namespace std;
 
int main() {
    int x, y;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int num;
            cin >> num;
            if (num == 1) {
                x = i;
                y = j;
            }
        }
    }
 
    int mv= abs(x - 2) + abs(y - 2);
    cout << mv << endl;
 
    return 0;
}
