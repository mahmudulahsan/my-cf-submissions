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

    int t; cin>>t;
    while(t--){
        int a[2], b[2];
        cin>>a[0]>>a[1]>>b[0]>>b[1];
        sort(a, a+2);
        sort(b, b+2);

        if(a[1]==b[1] && (a[0]+b[0]==a[1]))
            yes;
        else
            no;

    }

    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;

    return 0;
}
