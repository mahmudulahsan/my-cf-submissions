#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll a, b, t, d;

    cin>>t;

    while(t--){

        cin>>a>>b;

        d=abs(a-b);

        if(d%10==0){
            cout<<d/10<<endl;
        }
        else{
            cout<<(d/10)+1<<endl;
        }
    }

    return 0;
}
