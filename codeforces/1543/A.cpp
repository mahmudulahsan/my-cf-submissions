#include<bits/stdc++.h>
using namespace std;

#define mod       1e9+7
#define pi        acos(-1)
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b)  (a/__gcd(a,b))*b
#define ll        long long
#define pb        push_back
#define endl      '\n'
#define yes       cout<<"YES"<<endl
#define no        cout<<"NO"<<endl
#define ios       ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

int main()
{
    //ios
    int t; cin>>t;
    while(t--){
        ll a, b;
        cin>>a>>b;
        if(a==b) cout<<"0 "<<"0"<<endl;
        else{
            ll d = abs(a-b);
            ll x = ceil(a/(double)d);
            x = abs(x*d-a);

            ll y = floor(b/(double)d);
            y = abs(b-y*d);

            ll ans = min(x, y);
            cout<<d<<" "<<ans<<endl;
        }
    }

    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;


    return 0;
}
