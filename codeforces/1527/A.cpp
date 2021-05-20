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

    while(t--){
        int n;
        cin>>n;
        ll ans=1;

        while((ans)<=n){
            ans=ans*2;
        }
        if(ans>n) ans=ans/2;
        //cout<<"ans "<<ans<<endl;
        cout<<ans-1<<endl;

    }

    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;

    return 0;
}
