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
//#define ios       ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

int main()
{
    //ios

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];

        sort(a, a+n);

        int f=a[0], c=1;

        for(int i=1;i<n;i++){
            if(f==a[i]) c++;
        }

        if(c==n) cout<<0<<endl;
        else{
            cout<<n-c<<endl;
        }


    }



    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;

    return 0;
}
