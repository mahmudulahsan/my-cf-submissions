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
#define fastio    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

int main()
{
    //fastio

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int mx = INT_MIN;
        int r;
        while(n>0){
            r=n%10;
            mx = max(mx,r);
            n=n/10;
        }
        cout<<mx<<endl;
    }

    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;

    return 0;
}
