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
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int mn= INT_MIN;

        int c=1, m=0;

        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                m=1;
                c++;
                mn = max(c, mn);
            }
            else c=1;
        }
        if(m==0){
            cout<<1<<endl;
        }
        else{
            cout<<mn<<endl;
        }


    }

    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;

    return 0;
}
