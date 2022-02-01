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
    flash

    int t; cin>>t;
    while(t--){
        ll hc, dc, hm, dm, k, w, a;
        cin>>hc>>dc;
        cin>>hm>>dm;
        cin>>k>>w>>a;

        ll mon, hero;
        int ans = 0;

        for(int i=0;i<=k;i++){
            ll hn = hc+i*a;
            ll dn = dc+(k-i)*w;
            mon = hn/dm;
            hero = hm/dn;

            if(hn%dm!=0)
                mon++;
            if(hm%dn!=0)
                hero++;

            if(hero<=mon){
                ans = 1;
                break;
            }
        }

        if(ans) yes;
        else no;
    }

    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;

    return 0;
}
