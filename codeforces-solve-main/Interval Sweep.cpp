#include <iostream>
#include<cmath>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if ((a > 0 && b > 0) && (a % 2 != b % 2)) {
        cout << "YES" << endl;
       return 0;
    }

   
    if (a == 0 && b == 0) {
        cout << "NO" << endl;
        return 0;
    }
    if(a%2!=0 && b%2==0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    

  
     
     if(a==b)
    {
        cout<<"YES"<<endl;
        return 0;
    }
   
    return 0;
}
