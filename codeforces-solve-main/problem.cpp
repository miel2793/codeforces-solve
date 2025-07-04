#include <iostream>
using namespace std;
int main() {
    long long n, m, a;
    cin >> n >> m >> a;


    long long rows = n / a + (n % a != 0);
    long long cols = m / a + (m % a != 0);

  
    cout << rows * cols << std::endl;

    return 0;
}
