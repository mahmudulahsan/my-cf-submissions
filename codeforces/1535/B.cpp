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
        int n, x;

        cin>>n;

        vector<int>e;
        vector<int>o;

        for(int i=0;i<n;i++){
            cin>>x;
            if(x%2==0) e.pb(x);
            if(x%2!=0) o.pb(x);
        }

        int ans=0;
        int se=e.size();
        int so=o.size();

        ans+=(se*(se-1))/2;
        ans+=se*so;

        int c=0;

        for(int i=0;i<so-1;i++){
            for(int j=i+1;j<so;j++){
                if(gcd(o[i], 2*o[j])>1) c++;
            }
        }

        cout<<ans+c<<endl;

    }


    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;

    return 0;
}
