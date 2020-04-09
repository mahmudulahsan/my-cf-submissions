#include<iostream>
using namespace std;

int main()
{
    int a, i, T;

    cin>>T;

    for(i=1;i<=T;i++)
    {

    cin>>a;

    if(360%(180-a)==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    }


}
