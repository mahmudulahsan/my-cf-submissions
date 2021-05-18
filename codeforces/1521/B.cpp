#include<bits/stdc++.h>
using namespace std;

#define mod       1e9+7
#define pi        acos(-1)
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b)  (a/__gcd(a,b))*b
#define ll        long long
#define pb        push_back
#define endl      '\n'
//#define ios       ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

int main()
{
    //ios

    int t; cin>>t;
    ll r = mod;
    while(t--){
        ll n; cin>>n;

        ll a[n];

        ll mn = INT_MAX;
        ll pos = -1;

        for (int i = 0; i < n; i++){
            cin>>a[i];
            if(a[i]<mn){
                mn = a[i];
                pos = i;
            }
        }

        ll start=-1;
        int ops=0;

        if(pos%2==0){
            start=1;
            ops=n/2;
        }
        else{
            start=0;
            ops=(n+1)/2;
        }

        cout<<ops<<endl;

        for (int i = 0; i < ops; i++){
            cout<<pos+1<<" "<<start+1<<" "<<a[pos]<<" "<<r<<endl;
            start+=2;
        }
    }

    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;

    return 0;
}
