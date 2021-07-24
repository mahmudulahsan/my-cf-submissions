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

    int t; cin>>t;
    while(t--){
        string s;
        cin>>s;

        map<int, int>mp;

        int len = s.size();
        for(int i=0;i<len;i++){
            mp[s[i]]++;
        }

        int cnt = 0;

        for(auto u: mp){
            if(u.second>1){
                cnt++;
            }
        }

        cout<<(mp.size()-cnt)/2+cnt<<endl;

    }



    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;

    return 0;
}
