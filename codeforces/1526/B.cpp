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
        ll n; cin>>n;
        int m=0;
        if(n%11==0||n%111==0) yes;
        else{
            while(n>0){
                if(n%11==0){
                    m=1;
                    yes;
                    break;
                }
                n-=111;
            }
            if(m==0) no;
        }
    }

    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;

    return 0;
}
