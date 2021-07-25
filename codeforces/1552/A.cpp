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
#define fastio       ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

int main()
{
    //fastio

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string a; cin>>a;

        string b=a;

        sort(b.begin(), b.end());

        int cnt = 0;

        for(int i=0;i<n;i++){
            if(a[i]!=b[i]) cnt++;
        }

        cout<<cnt<<endl;



    }

    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;

    return 0;
}
