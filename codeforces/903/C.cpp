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
#define ios       ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

int main()
{
    //ios

    int n; cin>>n;

    map<int, int>mp;

    int x;

    while(n--){
        cin>>x;
        mp[x]++;
    }

    int mx = INT_MIN;

    for(auto it=mp.begin();it!=mp.end();it++){
        mx=max(mx, it->second);
    }

    cout<<mx<<endl;


    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;

    return 0;
}
