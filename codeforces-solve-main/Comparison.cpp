#include<iostream>
using namespace std;
int main()
{

    int A,B;
    char ch;
    cin>>A>>ch>>B;

    if(ch=='>' && A>B)
    {

        cout<<"Right"<<endl;
    }
    else if(ch=='>' && B>A)
    {
        cout<<"Wrong"<<endl;
    }

   else if(ch=='<' && A<B )
    {

        cout<<"Right"<<endl;
    }
    else if(ch=='<'&& B<A)
    {
         cout<<"Wrong"<<endl;
    }

    else if(ch=='=' &&(A==B)  )
    {

        cout<<"Right"<<endl;
    }
    else
    {
        cout<<"Wrong"<<endl;
    }

}
