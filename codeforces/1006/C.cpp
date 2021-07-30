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
    //flash

    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    ll s1=0, s2=0;
    int l=0, r=n-1;
    ll ans=0;

    while(l<=r){
        if(s1<s2){
            s1+=a[l];
            l++;
        }
        else{
            s2+=a[r];
            r--;
        }

        if(s1==s2){
            ans = s1;
        }
    }

    cout<<ans<<endl;

    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;

    return 0;
}
