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
#define SP(x,y)   setprecision((y))<<fixed<<(x)


int main()
{
    //flash
    int t; cin>>t;
    while(t--){
        int a, b, c;
        cin>>a>>b>>c;
        int d = abs(a-b);
        int x = abs(a-b)*2;

        int ans1, ans2, ans;

        if(a>x || b>x || c>x)
            cout<<-1<<endl;
        else{
            ans1 = c+d;
            ans2 = c-d;
            if(ans1<=x && ans1>0)
                ans = ans1;
            else
                ans = ans2;
            cout<<ans<<endl;
        }
    }

    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;

    return 0;
}
