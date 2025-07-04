#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int pi[100]; 
    for(int i = 0; i < n; i++) {
        cin >> pi[i];
    }
    
    double sum = 0.0;
    for(int i = 0; i < n; i++) {
        sum += pi[i];
    }
    
    double average = sum / n;
    
    cout.precision(12); 
    cout << fixed << average << endl;
    
    return 0;
}
