#include<bits/stdc++.h>
using namespace std;

#define mod       1e9+7
#define pi        acos(-1)
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b)  (a/__gcd(a,b))*b
#define ll        long long
#define pb        push_back
#define m_p       make_pair
#define endl      '\n'
#define yes       cout<<"YES"<<endl
#define no        cout<<"NO"<<endl
#define gap       " "
#define flash     ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

int main()
{
    //flash

    int t; cin>>t;
    while(t--){
        ll n; cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }

        ll mx = INT_MIN;
        ll ind, ind1;
        ll mul;

        for(ll i=0;i<n-1;i++){
            mul = a[i]*a[i+1];
            if(mul>=mx){
               mx = mul;
               ind = i;
               ind1=i+1;
            }
        }

        cout<<a[ind1]*a[ind]<<endl;
    }

    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;

    return 0;
}
