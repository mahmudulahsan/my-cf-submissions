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
#define SP(x,y)   setprecision((y))<<fixed<<(x)

#define flash     ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);


int main()
{
    //flash

    int t; cin>>t;
        while(t--){
        int n; cin>>n;

        string s[n+5];
        for(int i=0;i<n-2;i++){
            cin>>s[i];
        }

        string ans;
        ans = s[0];

        for(int i=1;i<n-2;i++){
            int x = ans.size()-1;
            if(ans[x]==s[i][0]){
                ans+=s[i][1];
            }
            else{
                ans+=s[i];
            }
        }

        if(ans.size()!=n){
            ans+='a';
        }

        cout<<ans<<endl;
    }

    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;

    return 0;
}
