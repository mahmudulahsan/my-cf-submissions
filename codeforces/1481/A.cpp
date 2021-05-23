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
        int a, b, l=0, u=0, d=0, r=0;
        cin>>a>>b;
        string s;
        cin>>s;
        int x=0, y=0;
        int len = s.size();
        for(int i=0;i<len;i++){
            if(s[i]=='L'){
                l++;
            }
            else if(s[i]=='U'){
                u++;
            }
            else if(s[i]=='D'){
                d++;
            }
            else if(s[i]=='R'){
                r++;
            }
        }
        if( a>=0 && b<0 ){
            b=b*(-1);
            if(r>=a&&d>=b) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if( a<0 && b>=0 ){
            a=a*(-1);
            if(l>=a&&u>=b) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if( a>=0 && b>=0 ){
            if(r>=a&&u>=b) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if( a<0 && b<0 ){
            a=a*(-1);
            b=b*(-1);
            if(l>=a&&d>=b) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }

    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;

    return 0;
}
