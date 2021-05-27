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


int lucky(int n, int d){
    int r;
    while(n>0){
        r=n%10;
        if(r==d){
            return 1;
        }
        n=n/10;
    }
    return 0;
}


int main()
{
    //ios

    int t; cin>>t;

    while(t--){
        int n, d;
    cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int ans=0;

    for(int i=0;i<n;i++){
        ans = lucky(a[i], d);
        if(ans==1) yes;

        else{
            int m=0;

            for(int j=d;j<=a[i];j+=d){
                if( lucky((a[i]-j), d) ){
                    yes;
                    m=1;
                    break;
                }
            }
            if(m==0) no;
        }
    }
    }

    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;

    return 0;
}
