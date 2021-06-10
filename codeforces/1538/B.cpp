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
        int a[n];

        ll sum=0;

        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }

        if(sum%n!=0) cout<<"-1"<<endl;
        else{
            int m=sum/n;
            int c=0;
            for(int i=0;i<n;i++){
                if(a[i]>m) c++;
            }
            cout<<c<<endl;
        }



    }

    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;

    return 0;
}
