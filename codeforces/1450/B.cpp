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
        int n, k; cin>>n>>k;
        int a[n], b[n];
        int suma = 0, sumb = 0;
        for(int i=0;i<n;i++){
            cin>>a[i]>>b[i];
        }

        int cnt = 0, m = 0;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if( abs(a[i]-a[j])+abs(b[i]-b[j])<=k ) cnt++;
            }
            if(cnt==n){
                cout<<"1"<<endl;
                m = 1;
                break;
            }
            cnt = 0;
        }

        if(m==0) cout<<"-1"<<endl;
    }

    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;

    return 0;
}
