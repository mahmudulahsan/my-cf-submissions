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

ll total(ll n)
{
    ll sum = 0;
    while(n>0){
        sum+=n;
        n/=10;
    }
    return sum;
}

int main()
{
    //ios

    int t; cin>>t;
    while(t--){
        ll l, r;
        cin>>l>>r;
        ll a = total(l);
        ll b = total(r);

        cout<<b-a<<endl;
    }

    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;

    return 0;
}
