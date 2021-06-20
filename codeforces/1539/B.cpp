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


        ll n, q; cin>>n>>q;
        string s; cin>>s;
        ll len = s.size();
        ll tmp;
        ll sum = 0;
        ll b[len];
        for(ll i=0;i<len;i++){
            tmp=s[i]-96;
            //cout<<tmp<<endl;
            sum+=tmp;
            b[i]=sum;

        }
        /*for(int i=0;i<len;i++){
            cout<<b[i]<<" ";
        }*/
        ll x, y;
        ll ans;
        while(q--){
            cin>>x>>y;
            if(x==1){
                cout<<b[y-1]<<endl;
            }
            else{
            ans = b[y-1]-b[x-2];
            cout<<ans<<endl;
            }

        }


    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;


    return 0;
}
