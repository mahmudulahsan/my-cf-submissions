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

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s="";
        cin>>s;

        int mn = INT_MAX;

        int z = 0, r = 0;

        string ans="";

        if(n>=2){
            if(s[0]==s[1]){
                r=1;
                ans+=s[0];
                ans+=s[0];
            }
        }

        for(int i=0;i<n;i++){
            if(s[i]<=mn && r!=1){
                mn = s[i];
                z = i;
            }
            else{
                break;
            }
        }

        if(r==0){
            for(int i=0;i<=z;i++){
            ans+=s[i];
        }
        for(int i=z;i>=0;i--){
            ans+=s[i];
        }
        }

        cout<<ans<<endl;

    }


    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;

    return 0;
}
