#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll t;

    cin>>t;

    while(t--){
        ll n, c=0;

        cin>>n;

        if(n<3){
            cout<<"0"<<endl;
        }
        else{
            if(n%2==0){
                cout<<(n-2)/2<<endl;
            }
            else{
                cout<<(n-1)/2<<endl;
            }
        }
    }


    return 0;
}
