#include<iostream>
using namespace std;

int main()
{
    int i=0,N,max,max2;

    cin>>N;

    int arr[N];

   do
    {
       cin>>arr[i];
        i++;
    }while(i<N);

    max=arr[0];
    max=arr[1];

    for(i=0 ; i<N ; i++)
    {
        if(arr[i] > max)
        {
            max2=max;
            max=arr[i];
        }
        else if(arr[i] > max2 && arr[i] <max)
        {
            max2=arr[i];
        }
    }


    cout<<max<<endl;



    return 0;
}
