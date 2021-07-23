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
        int len = s.length();

        int cnt = 0, cnt1 = 0;
        int c = 0;

        for(int i='a';i<='z';i++){
            for(int j=0;j<len;j++){
                if(s[j]==i){
                    c++;
                }
            }
            if(c==1){
                cnt++;
                c=0;
            }
            else if(c>1){
                cnt1++;
                c=0;
            }
            else continue;
        }

        cout<<cnt/2+cnt1<<endl;


    }



    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;


    return 0;
}
