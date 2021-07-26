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
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a, a+n);

        if(a[0]==a[n-1]) cout<<n<<endl;
        else cout<<1<<endl;
    }

    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;

    return 0;
}
