#include<iostream>
#include<iomanip>
using namespace std;
int main()
{

    double X,P,d;
    cin>>X>>P;
    d=(100*P)/(100-X);
    cout<<fixed<<setprecision(2)<<d<<endl;
}
