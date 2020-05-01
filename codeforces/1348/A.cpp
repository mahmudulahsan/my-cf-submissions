#include<iostream>
using namespace std;

int main()
{
    int t, n, sum=0, x;

    cin>>t;

    while(t--){
        cin>>n;
        x=n/2;
        for(int i=0;i<x;i++){
            sum=sum*2+2;
        }
        cout<<sum<<endl;
        sum=0;
    }


}
