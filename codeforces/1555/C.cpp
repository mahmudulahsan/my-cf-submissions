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
    flash

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[2][n+2];

        a[0][0]=0;
        a[1][0]=0;

        for(int i=1;i<=n;i++){
            cin>>a[0][i];
            a[0][i]+=a[0][i-1];
        }
        for(int i=1;i<=n;i++){
            cin>>a[1][i];
            a[1][i]+=a[1][i-1];
        }

        int s1, s2;
        int mn = INT_MAX;

        for(int i=1;i<=n;i++){
            s1=a[0][n]-a[0][i];
            s2=a[1][i-1];
            mn=min(mn,max(s1, s2));
        }

        cout<<mn<<endl;

    }

    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;

    return 0;
}
