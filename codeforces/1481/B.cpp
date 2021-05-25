#include<bits/stdc++.h>
using namespace std;

#define mod       1e9+7
#define pi        acos(-1)
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b)  (a/__gcd(a,b))*b
#define ll        long long
#define pb        push_back
#define endl      '\n'
//#define ios       ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);


int main()
{
    //ios

    int t; cin>>t;

    while(t--){
        int n, k; cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];

        int ind;

        while(1){
            int m=0;
            for(int i=0;i<n-1;i++){
                if(a[i+1]>a[i]){
                    m=1;
                    ind=i;
                    k--;
                    a[i]++;
                    break;
                }
            }
            if( m==0||k==0 ) break;
        }
        if(k==0) cout<<ind+1<<endl;
        else cout<<-1<<endl;
    }



    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;

    return 0;
}
