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
        int n; cin>>n;
        int a[n+1];

        int b[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
            b[i]=a[i];
        }

        sort(b+1, b+n+1);

        int mn=b[1];
        int mx=b[n];

        //cout<<"mn "<<mn<<" "<<"mx "<<mx<<endl;

        int x, y;

        for(int i=1;i<=n;i++){
            if(a[i]==mn) x=i;
            if(a[i]==mx) y=i;
        }

        if(x>=y){
            swap(x, y);
        }

        int ma, mb, mc;
        ma=x+(n-y)+1;
        mb=y;
        mc=(n-x)+1;

        int ans=min(ma, mb);
        ans=min(ans, mc);

        cout<<ans<<endl;

    }

    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;

    return 0;
}

